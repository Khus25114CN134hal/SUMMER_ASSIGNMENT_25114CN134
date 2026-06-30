#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[50];
    int n = 0, choice;

    do {
        printf("\n--- Mini Employee Management Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            employees[n].id = n + 1;
            printf("Enter name: ");
            scanf("%s", employees[n].name);
            printf("Enter salary: ");
            scanf("%f", &employees[n].salary);
            n++;
            printf("Employee added.\n");
        } else if (choice == 2) {
            printf("\nID\tName\tSalary\n");
            for (int i = 0; i < n; i++)
                printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
        } else if (choice == 3) {
            int id;
            float newSalary;
            printf("Enter employee ID: ");
            scanf("%d", &id);
            printf("Enter new salary: ");
            scanf("%f", &newSalary);
            if (id >= 1 && id <= n) {
                employees[id - 1].salary = newSalary;
                printf("Salary updated.\n");
            }
        }
    } while (choice != 4);

    return 0;
}
