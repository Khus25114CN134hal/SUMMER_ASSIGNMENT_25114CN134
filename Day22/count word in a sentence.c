#include <stdio.h>
int main() {
    char str[200];
    int i = 0, words = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Count words by detecting spaces
    while(str[i] != '\0') {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i - 1] == ' '))
            words++;
        i++;
    }
    printf("Total Words = %d", words);
    return 0;
}
