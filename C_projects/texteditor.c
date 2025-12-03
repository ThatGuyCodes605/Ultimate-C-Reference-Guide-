#include <stdio.h>
#include <string.h>

void edit_line(char* buffer, int current_line) {
    char* start = buffer;

    // Navigate to the correct line
    for (int i = 0; i < current_line; i++) {
        start = strchr(start, '\n');
        if (!start) {
            printf("Line %d does not exist.\n", current_line);
            return;
        }
        start++;
    }

    // Find the end of the current line
    char* line_end = strchr(start, '\n');
    if (!line_end) line_end = start + strlen(start);

    // Save the rest of the text after the current line
    char saved[1024];
    strcpy(saved, line_end);

    printf("Enter new line text: ");
    fgets(start, (int)(line_end - start), stdin);
    // Remove trailing newline from fgets
    start[strcspn(start, "\n")] = 0;

    // Add newline back and the rest of the text
    strcat(start, "\n");
    strcat(start, saved);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE* f = fopen(argv[1], "r");
    if (!f) {
        perror("Error opening file");
        return 1;
    }

    char buffer[4096] = {0};
    fread(buffer, 1, sizeof(buffer) - 1, f);
    fclose(f);

    printf("File content:\n%s\n", buffer);

    int current_line;
    printf("Enter line number to edit (0-based): ");
    scanf("%d", &current_line);
    getchar(); // consume newline

    edit_line(buffer, current_line);

    f = fopen(argv[1], "w");
    if (!f) {
        perror("Error writing file");
        return 1;
    }
    fwrite(buffer, 1, strlen(buffer), f);
    fclose(f);

    printf("Line updated successfully.\n");
    return 0;
}

