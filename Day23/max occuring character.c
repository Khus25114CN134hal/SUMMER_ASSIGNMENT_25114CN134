#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}, i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Store frequency of each character
    for(i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    // Find character with maximum frequency
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum Occurring Character = %c", maxChar);

    return 0;
}
