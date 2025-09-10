#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;

    printf("Enter the value of n :");

    scanf("%d", &n);
    srand(time(0));

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand() % 130;
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of array ptr[%d] is %d \n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}