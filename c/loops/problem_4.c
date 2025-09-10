#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    for (i = 1; i < 11; i++)
    {
        int tab = 8 * i;
        sum += tab;
    }
    printf("The sum of values of 8 table is %d \n", sum);
    return 0;
}