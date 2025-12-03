// teapot_spin.c
// Build: gcc teapot_spin.c -o teapot_spin -lGL -lGLU -lglut -lm
// Run inside: nix-shell -p freeglut mesa libGLU
// Works on any GLUT implementation (Haiku-like rotation + FPS scaling)

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static double lastTime = 0.0;
static double fps = 0.0;
static int frameCount = 0;
static double fpsTimer = 0.0;

static float baseSpeed = 30.0f;   // degrees per second base speed
static float speedScale = 1.0f;   // adjusted dynamically from FPS

static float rotX = 0.0f;
static float rotY = 0.0f;
static float rotZ = 0.0f;

static int windowWidth = 800;
static int windowHeight = 600;
static bool paused = false;

static double now_seconds() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec + ts.tv_nsec * 1e-9;
}

void render_text(float x, float y, const char *text) {
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0, windowWidth, 0, windowHeight);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glRasterPos2f(x, y);
    for (const char *c = text; *c; ++c)
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c);

    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

void update_fps(double dt) {
    frameCount++;
    fpsTimer += dt;
    if (fpsTimer >= 1.0) {
        fps = frameCount / fpsTimer;
        frameCount = 0;
        fpsTimer = 0.0;
        // Scale speed based on performance: faster = spins faster
        speedScale = fmax(0.5f, fmin(fps / 60.0f, 4.0f)); // clamp 0.5x–4x
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(0.0, 1.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    // Apply rotation
    glRotatef(rotX, 1.0f, 0.0f, 0.0f);
    glRotatef(rotY, 0.0f, 1.0f, 0.0f);
    glRotatef(rotZ, 0.0f, 0.0f, 1.0f);

    glutSolidTeapot(1.0);

    // Draw FPS
    char buf[64];
    snprintf(buf, sizeof(buf), "FPS: %.1f  Speed Scale: %.2f", fps, speedScale);
    glColor3f(1.0f, 1.0f, 1.0f);
    render_text(10, 10, buf);

    glutSwapBuffers();
}

void idle_func() {
    double current = now_seconds();
    if (lastTime == 0.0) lastTime = current;
    double dt = current - lastTime;
    lastTime = current;

    update_fps(dt);

    if (!paused) {
        float speed = baseSpeed * speedScale;
        rotX += speed * dt * 0.7f;
        rotY += speed * dt * 1.0f;
        rotZ += speed * dt * 1.3f;

        if (rotX > 360.0f) rotX -= 360.0f;
        if (rotY > 360.0f) rotY -= 360.0f;
        if (rotZ > 360.0f) rotZ -= 360.0f;
    }

    glutPostRedisplay();
}

void reshape(int w, int h) {
    windowWidth = w;
    windowHeight = h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)(h ? h : 1), 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    (void)x; (void)y;
    switch (key) {
        case 27: // ESC
            printf("Goodbye!\n");
            exit(0);
        case ' ':
            paused = !paused;
            printf("%s\n", paused ? "Paused" : "Resumed");
            break;
    }
}

void init_gl() {
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    GLfloat pos[] = { 3.0f, 3.0f, 3.0f, 1.0f };
    GLfloat amb[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    GLfloat diff[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    glLightfv(GL_LIGHT0, GL_POSITION, pos);
    glLightfv(GL_LIGHT0, GL_AMBIENT, amb);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diff);

    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Haiku-style Spinning Teapot (with FPS)");

    init_gl();

    glutDisplayFunc(display);
    glutIdleFunc(idle_func);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    printf("Controls:\n");
    printf("  SPACE - Pause/Resume rotation\n");
    printf("  ESC   - Exit\n\n");

    glutMainLoop();
    return 0;
}

