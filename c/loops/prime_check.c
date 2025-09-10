#include <stdio.h>

int main()
{
    int p;
    int prime = 1;
    printf("Enter a number to check weather it's a prime number or not :");
    scanf("%d", &p);

    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number \n", p);
    }
    else if (p == 0 || p == 1)
    {

        printf("%d is neither prime nor composite \n", p);
    }
    else
    {
        printf("%d is  a prime number \n", p);
    }

    return 0;
}