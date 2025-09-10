#include <stdio.h>

int main()
{
    int runs[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &runs[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The runs scored by batsman %d is %d \n", i+1, runs[i]);
    }
    return 0;
}