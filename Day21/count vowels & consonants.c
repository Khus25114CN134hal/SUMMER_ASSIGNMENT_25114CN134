#include <stdio.h>
int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        // Check only alphabet characters
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            // Check vowel
            if (str[i]=='A'str[i]=='E'str[i]=='I'||
                str[i]=='O'str[i]=='U'str[i]=='a'||
                str[i]=='e'str[i]=='i'str[i]=='o'||str[i]=='u')
                vowels++;
            else
                consonants++;
        }
        i++;}
   printf("Vowels = %d\nConsonants = %d", vowels, consonants);
 return 0;
}
