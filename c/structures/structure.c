#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // these three declare a data type
    float salary;
    char name[30];
};

int main()
{

    struct employee e1, e2, e3;
    printf("Enter  employee 1 code :\n");
    scanf("%d", &e1.code);
    printf("Enter  salary  of employee 1:\n");
    scanf("%f", &e1.salary);
    printf("Enter  name of employee 1 :\n");
    scanf("%s", &e1.name);

    printf("Enter  employee 2 code :\n");
    scanf("%d", &e2.code);
    printf("Enter  salary of employee 2:\n");
    scanf("%f", &e2.salary);
    printf("Enter  name of employee 2 :\n");
    scanf("%s", &e2.name); // because arrays are not assignable.

    printf("Enter  employee 3 code :\n");
    scanf("%d", &e3.code);
    printf("Enter salary of employee 3 :\n");
    scanf("%f", &e3.salary);
    printf("Enter name of employee 3 :\n");
    scanf("%s", &e3.name);

    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    printf("%d %f %s \n", e2.code, e2.salary, e2.name);

    printf("%d %f %s \n", e3.code, e3.salary, e3.name);

    return 0;
}