#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year :");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    { // leap year if divisible by 400
      // leap year if divisible by 4 and not divisible by 100
        printf("%d is a leap year \n", year);
    }

    else
    {
        printf("%d is not a leap year \n", year);
    }
    return 0;
}