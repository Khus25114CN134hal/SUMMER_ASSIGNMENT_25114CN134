#include <stdio.h>
#include <string.h>

struct Salary {
    char name[50];
    float basic;
    float hra;
    float da;
    float deductions;
    float netSalary;
};

void calculateSalary(struct Salary *s) {
    s->netSalary = s->basic + s->hra + s->da - s->deductions;
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Salary emp[50];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", emp[i].name);
        printf("Enter basic salary: ");
        scanf("%f", &emp[i].basic);
        printf("Enter HRA: ");
        scanf("%f", &emp[i].hra);
        printf("Enter DA: ");
        scanf("%f", &emp[i].da);
        printf("Enter deductions: ");
        scanf("%f", &emp[i].deductions);

        calculateSalary(&emp[i]);
    }

    printf("\n--- Salary Slip ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", emp[i].name);
        printf("Basic: %.2f, HRA: %.2f, DA: %.2f, Deductions: %.2f\n",
               emp[i].basic, emp[i].hra, emp[i].da, emp[i].deductions);
        printf("Net Salary: %.2f\n", emp[i].netSalary);
    }

    return 0;
}
