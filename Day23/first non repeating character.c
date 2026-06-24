#include <stdio.h>
int main() {
    char str[100];
    int i, j, count;
    printf("Enter a string: ");
    scanf("%s", str);
    // Find first character with frequency 1
    for(i = 0; str[i] != '\0'; i++) {
        count = 0;
        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }
        if(count == 1) {
            printf("First Non-Repeating Character = %c", str[i]);
            return 0;}}
    printf("No Non-Repeating Character Found");
    return 0;
}
