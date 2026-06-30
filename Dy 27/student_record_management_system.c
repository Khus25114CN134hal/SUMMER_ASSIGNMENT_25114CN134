#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[50];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    do {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Display all records\n");
        printf("2. Search student by ID\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nID\tName\tMarks\n");
            for (int i = 0; i < n; i++)
                printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].marks);
        } else if (choice == 2) {
            int id;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (students[i].id == id) {
                    printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Student not found.\n");
        }
    } while (choice != 3);

    return 0;
}
