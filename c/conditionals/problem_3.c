#include <stdio.h>

int main()
{
    float salary;

    printf("Enter your yearly income in Lakhs :");
    scanf("%f", &salary);

    if (salary < 2.5)
    {
        printf("You do not have to pay tax");
    }
    else if (salary >= 2.5 && salary < 5)
    {
        printf("You have to pay 5 percent tax that is %.2f", salary / 20.0);
    }
    else if (salary >= 5 && salary < 10)
    {
        printf("You have to pay 20 percent tax that is %.2f", salary / 5);
    }
    else
    {
        printf("You have to pay 30 percent tax that is %.2f", salary * (3.0 / 10.0));
    }

    return 0;
}