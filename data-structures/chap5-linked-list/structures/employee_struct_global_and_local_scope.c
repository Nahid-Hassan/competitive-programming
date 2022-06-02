#include <stdio.h>

struct {
    char *name;
    int age;
    int salary;
} emp1, emp2;

int manager() {
    struct {
        char *name;
        int age;
        int salary;
    } manager;

    manager.age = 26;

    if (manager.age > 30) {
        manager.salary = 100000;
    } else {
        manager.salary = 50000;
    }

    return manager.salary;
}

int main() {
    printf("Enter the salary the of employee1: ");
    scanf("%d", &emp1.salary);
    printf("Enter the salary the of employee2: ");
    scanf("%d", &emp2.salary);

    printf("The salary of employee1 is %d\n", emp1.salary);
    printf("The salary of employee2 is %d\n", emp2.salary);

    printf("The salary of manager is %d\n", manager());
}