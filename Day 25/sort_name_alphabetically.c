#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[][50] = {"Charlie", "Alice", "Bob"};
    int n = 3;

    sortNames(names, n);

    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);
    return 0;
}
