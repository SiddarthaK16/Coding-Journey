#include <stdio.h>

int sum(int);

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter the number of natural numbers whose sum you want :");
    scanf("%d", &n);

    printf("The sum of %d natural numbers is %d", n, sum(n));
    // 1 2 3 4 5 6 7
    return 0;
}