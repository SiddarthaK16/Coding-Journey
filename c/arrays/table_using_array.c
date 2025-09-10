#include <stdio.h>

int main()
{
    int table[10];
    int n;
    printf("Enter the number whose table you want to print :");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
        printf("%dX%d=%d\n",n, i + 1, table[i]);
    }

    return 0;
}