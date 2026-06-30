#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float subjects[5];
    float total, percentage;
    char grade;
};

void generateMarksheet(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++)
        s->total += s->subjects[i];

    s->percentage = s->total / 5;

    if (s->percentage >= 90) s->grade = 'A';
    else if (s->percentage >= 75) s->grade = 'B';
    else if (s->percentage >= 60) s->grade = 'C';
    else if (s->percentage >= 40) s->grade = 'D';
    else s->grade = 'F';
}

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.subjects[i]);
    }

    generateMarksheet(&s);

    printf("\n--- MARKSHEET ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade: %c\n", s.grade);

    return 0;
}
