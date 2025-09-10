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
    int len=strlen(str);

    for (int i = 0; i <len ; i++)
    {
        if (x == str[i])
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("That character is present in the string \n");
        printf("Number of times %c occured in %s is %d \n", x, str, count);
    }
    else
    {
        printf("Entered character is not present in string");
    }

    return 0;
}