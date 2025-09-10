#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number you want to check divisibility :");
    scanf("%d", &a);

    b = a % 97;
    if (b == 0)
    {
        printf("The entered number is divisible by 97 \n");
    }
    else
    {
        printf("Not divisible \n");
    }

    return 0;
}