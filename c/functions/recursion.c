#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0)
    { // base condition
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int a;
    printf("Enter the value of number you wanna know factorial of :");
    scanf("%d", &a);
    factorial(a);
    printf("The factorial of %d is %d \n", a, factorial(a));
    return 0;
}