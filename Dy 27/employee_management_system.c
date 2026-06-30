#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee employees[50];
    int n, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        employees[i].id = i + 1;
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter department: ");
        scanf("%s", employees[i].department);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    do {
        printf("\n--- Employee Management Menu ---\n");
        printf("1. Display all employees\n");
        printf("2. Search employee by ID\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nID\tName\tDept\tSalary\n");
            for (int i = 0; i < n; i++)
                printf("%d\t%s\t%s\t%.2f\n", employees[i].id, employees[i].name,
                       employees[i].department, employees[i].salary);
        } else if (choice == 2) {
            int id;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (employees[i].id == id) {
                    printf("Name: %s, Dept: %s, Salary: %.2f\n",
                           employees[i].name, employees[i].department, employees[i].salary);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Employee not found.\n");
        }
    } while (choice != 3);

    return 0;
}
