#include <stdio.h>

struct Employee
{
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *first, const char *last, double salary)
{
    snprintf(e->firstName, sizeof(e->firstName), "%s", first);
    snprintf(e->lastName, sizeof(e->lastName), "%s", last);
    e->monthlySalary = salary;
}

void set_salary(struct Employee *e, double salary)
{
    e->monthlySalary = salary;
}

void emp_display(struct Employee *e)
{
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: Rs.%.2f\n", e->monthlySalary);
    printf("Yearly Salary: Rs.%.2f\n", e->monthlySalary * 12);
}

int main()
{
    struct Employee emp1, emp2;
    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);
    printf("Yearly Salary Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    set_salary(&emp1, emp1.monthlySalary * 1.1);
    set_salary(&emp2, emp2.monthlySalary * 1.1);
    printf("\nYearly Salary After 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    return 0;
}
