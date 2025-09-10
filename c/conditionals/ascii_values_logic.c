#include <stdio.h>

int main()
{
    char x;

    printf("Enter any character you desire :");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("The entered character is uppercase and it's ASCII value is %d", x);
    }

    else if (x >= 'a' && x <= 'z')
    {
        printf("The entered character is lowercase and it's ASCII value is %d", x);
    }
    else
    {
        printf("Entered character is not differentiable as lowercase and uppercase with ASCII value of %d", x);
    }

    return 0;
}