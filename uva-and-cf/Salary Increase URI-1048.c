#include<stdio.h>

int main()
{
    float salary;

    scanf("%f",&salary);

    if(salary >= 0.00 && salary <= 400.00) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary+ salary*.15),salary*.15, 15);
    }

    else if(salary >= 400.01  && salary <= 800.00) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary+ salary*.12),salary*.12, 12);
    }

    else if(salary >= 800.01  && salary <= 1200.00) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary+ salary*.10),salary*.10, 10);
    }

    else if(salary >= 1200.01  && salary <= 2000.00) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary+ salary*.07),salary*.07, 7);
    }

    else if(salary >2000.00) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary+ salary*.04),salary*.04, 4);
    }
}


