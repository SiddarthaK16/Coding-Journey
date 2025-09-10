#include <stdio.h>

int fibonacci(int); // 0,1,1,2,3,5,8,13,21,.....

int fibonacci(int x)
{
    if (x == 1)
        return 0; // never forget base cases for recursion
    if (x == 2)
        return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{

    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("The %d  number of fibonacci sequence is %d", n, fibonacci(n));
    return 0;
}