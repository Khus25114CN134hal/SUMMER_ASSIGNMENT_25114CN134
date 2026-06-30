#include <stdio.h>
#include <string.h>

void commonCharacters(char s1[], char s2[]) {
    int freq[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
        freq[(int)s1[i]] = 1;

    int seen[256] = {0};
    for (int i = 0; s2[i] != '\0'; i++) {
        char c = s2[i];
        if (freq[(int)c] && !seen[(int)c]) {
            printf("%c ", c);
            seen[(int)c] = 1;
        }
    }
}

int main() {
    char s1[] = "hello";
    char s2[] = "world";
    commonCharacters(s1, s2);
    return 0;
}

