#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    char subjects[3][30];
    float marks[3];
    float total, average;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[50];

    for (int i = 0; i < n; i++) {
        students[i].rollNo = i + 1;
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter subject %d name: ", j + 1);
            scanf("%s", students[i].subjects[j]);
            printf("Enter marks: ");
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].average = students[i].total / 3;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        for (int j = 0; j < 3; j++)
            printf("%s: %.2f\n", students[i].subjects[j], students[i].marks[j]);
        printf("Total: %.2f, Average: %.2f\n", students[i].total, students[i].average);
    }

    return 0;
}
