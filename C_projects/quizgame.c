#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char question[200];
    char optionA[50];
    char optionB[50];
    char optionC[50];
    char optionD[50];
    char correctAnswer;
} Question;

void displayQuestion(Question q, int questionNum);
char getUserAnswer();
void displayScore(int score, int total);

int main(void) {
    Question questions[] = {
        {
            "What does CPU stand for?",
            "Central Process Unit",
            "Central Processing Unit",
            "Computer Personal Unit",
            "Central Processor Unit",
            'B'
        },
        {
            "Which programming language is known as the 'mother of all languages'?",
            "Python",
            "Java",
            "C",
            "Assembly",
            'C'
        },
        {
            "What is the correct syntax to output 'Hello World' in C?",
            "echo('Hello World');",
            "print('Hello World');",
            "printf(\"Hello World\");",
            "Console.WriteLine('Hello World');",
            'C'
        },
        {
            "Which symbol is used to comment a single line in C?",
            "#",
            "//",
            "/*",
            "--",
            'B'
        },
        {
            "What is the size of int in C (on most systems)?",
            "2 bytes",
            "4 bytes",
            "8 bytes",
            "1 byte",
            'B'
        },
        {
            "Which loop is guaranteed to execute at least once?",
            "for loop",
            "while loop",
            "do-while loop",
            "foreach loop",
            'C'
        },
        {
            "What does RAM stand for?",
            "Random Access Memory",
            "Read Access Memory",
            "Rapid Access Memory",
            "Run Access Memory",
            'A'
        },
        {
            "Which of these is NOT a valid C data type?",
            "int",
            "float",
            "boolean",
            "char",
            'C'
        },
        {
            "What is the correct way to declare a pointer in C?",
            "int ptr;",
            "int *ptr;",
            "int &ptr;",
            "pointer int ptr;",
            'B'
        },
        {
            "Which header file is needed to use printf() in C?",
            "<iostream>",
            "<stdlib.h>",
            "<stdio.h>",
            "<string.h>",
            'C'
        }
    };
    
    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char answer;
    
    printf("================================\n");
    printf("  PROGRAMMING QUIZ GAME\n");
    printf("================================\n");
    printf("Answer %d questions to test your knowledge!\n\n", numQuestions);
    
    for (int i = 0; i < numQuestions; i++) {
        displayQuestion(questions[i], i + 1);
        answer = getUserAnswer();
        
        if (toupper(answer) == questions[i].correctAnswer) {
            printf("✓ Correct!\n\n");
            score++;
        } else {
            printf("✗ Wrong! The correct answer was %c\n\n", questions[i].correctAnswer);
        }
    }
    
    displayScore(score, numQuestions);
    
    return 0;
}

void displayQuestion(Question q, int questionNum) {
    printf("Question %d: %s\n", questionNum, q.question);
    printf("A) %s\n", q.optionA);
    printf("B) %s\n", q.optionB);
    printf("C) %s\n", q.optionC);
    printf("D) %s\n", q.optionD);
}

char getUserAnswer() {
    char answer;
    
    do {
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &answer);
        answer = toupper(answer);
        
        if (answer < 'A' || answer > 'D') {
            printf("Invalid input! Please enter A, B, C, or D.\n");
        }
    } while (answer < 'A' || answer > 'D');
    
    return answer;
}

void displayScore(int score, int total) {
    float percentage = (float)score / total * 100;
    
    printf("================================\n");
    printf("         FINAL SCORE\n");
    printf("================================\n");
    printf("You got %d out of %d correct!\n", score, total);
    printf("Percentage: %.1f%%\n\n", percentage);
    
    if (percentage >= 90) {
        printf("🌟 Excellent! You're a programming genius!\n");
    } else if (percentage >= 70) {
        printf("👍 Great job! You know your stuff!\n");
    } else if (percentage >= 50) {
        printf("😊 Not bad! Keep learning!\n");
    } else {
        printf("📚 Keep studying! You'll get better!\n");
    }
    
    printf("================================\n");
}
