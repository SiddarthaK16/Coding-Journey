#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    char x[20];
    char y[20];

    printf("Enter the name of first person :");
    scanf("%s", x);
    printf("Enter the name of second person :");
    scanf("%s", y);

    struct date p1, p2;

    printf("Enter the %s's DOB in format DD/MM/YYYY  :", x);
    scanf("%d/%d/%d", &p1.day, &p1.month, &p1.year);
    printf("Enter the %s's DOB in format DD/MM/YYYY  :", y);
    scanf("%d/%d/%d", &p2.day, &p2.month, &p2.year);

    if (p1.year > p2.year)
    {
        printf("%s is older than %s", y, x);
    }
    else if (p2.year > p1.year)
    {
        printf("%s is older than %s", x, y);
    }
    else if (p1.year == p2.year)
    {
        if (p1.month > p2.month)
        {
            printf("%s is older than %s", y, x);
        }
        else if (p2.month > p1.month)
        {
            printf("%s is older than %s", x, y);
        }
        else if (p1.month == p2.month)
        {
            if (p1.day > p2.day)
            {
                printf("%s is older than %s", y, x);
            }
            else if (p2.day > p1.day)
            {
                printf("%s is older than %s", x, y);
            }
            else if (p1.day == p2.day)
            {
                printf("%s and %s are of same age exactly", x, y);
            }
        }
    }

    return 0;
}