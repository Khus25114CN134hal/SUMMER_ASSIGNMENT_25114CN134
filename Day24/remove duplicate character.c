#include <stdio.h>
int main() {
    char str[100];
    int i;
    int visited[256] = {0};
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String after removing duplicates: ");
    // Print character only once
    for(i = 0; str[i] != '\0'; i++) {
        if(!visited[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;}}
    return 0;
}
