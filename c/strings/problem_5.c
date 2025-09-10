#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    char x;

    printf("Enter the string :");
    scanf("%s", str);

    printf("Enter whose occurance you want to find out in printed string :");
    scanf(" %c", &x); // space before c... the input buffer problem..

    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (x == str[i])
        {
            count++;
        }
    }
 printf("Number of times %c occured in %s is %d", x, str, count);
   

    return 0;
}