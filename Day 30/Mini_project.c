#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float total, average;
    char grade;
};

void inputStudent(struct Student *s, int rollNo) {
    s->rollNo = rollNo;
    printf("Enter name: ");
    scanf("%s", s->name);

    s->total = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }
    s->average = s->total / 3;

    if (s->average >= 90) s->grade = 'A';
    else if (s->average >= 75) s->grade = 'B';
    else if (s->average >= 60) s->grade = 'C';
    else if (s->average >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void displayStudent(struct Student s) {
    printf("\nRoll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Total: %.2f, Average: %.2f, Grade: %c\n", s.total, s.average, s.grade);
}

void searchStudent(struct Student arr[], int n, int rollNo) {
    for (int i = 0; i < n; i++) {
        if (arr[i].rollNo == rollNo) {
            displayStudent(arr[i]);
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[50];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i], i + 1);
    }

    do {
        printf("\n--- Mini Project Menu ---\n");
        printf("1. Display all students\n");
        printf("2. Search student by roll number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < n; i++)
                displayStudent(students[i]);
        } else if (choice == 2) {
            int rollNo;
            printf("Enter roll number: ");
            scanf("%d", &rollNo);
            searchStudent(students, n, rollNo);
        }
    } while (choice != 3);

    return 0;
}
