#include <stdio.h>

typedef struct complex
{
    int x;
    int y;
} C;

void display(C number)
{
    if (number.y > 0)
    {
        printf("%d+%dj \n", number.x, number.y);
    }
    else if (number.y == 0)
    {
        printf("%d \n", number.x);
    }
    else
    {
        printf("%d%dj\n", number.x, number.y);
    }
}

int main()
{

    C number[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of number %d:", i + 1);
        scanf("%d", &number[i].x);
        printf("Enter the imaginary part of number %d :", i + 1);
        scanf("%d", &number[i].y);
    }

    for (int i = 0; i < 5; i++)
    {
        display(number[i]);
    }

    return 0;
}