#include <stdio.h>
#include <string.h>

int main() {
    char questions[3][100] = {
        "What is the capital of France? ",
        "Which language is used for web development? ",
        "What is 5 + 3? "
    };
    char answers[3][50] = {"paris", "javascript", "8"};
    char userAnswer[50];
    int score = 0;

    for (int i = 0; i < 3; i++) {
        printf("%s", questions[i]);
        scanf("%s", userAnswer);

        // convert to lowercase for comparison
        for (int j = 0; userAnswer[j]; j++)
            userAnswer[j] = tolower(userAnswer[j]);

        if (strcmp(userAnswer, answers[i]) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %s\n", answers[i]);
        }
    }

    printf("\nYour Score: %d/3\n", score);
    return 0;
}
