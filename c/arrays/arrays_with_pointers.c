#include <stdio.h>

int main()
{
    int runs[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &runs[i]);
    }              //arrays in memory are stored as contiguous blocks

    for (int i = 0; i < 5; i++)
    {
        printf("The address of runs %d is %d \n", i, &runs[i]);
    }
    return 0;
}