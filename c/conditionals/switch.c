#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number a ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    default:
        printf("NO");
    }
    return 0;
}
