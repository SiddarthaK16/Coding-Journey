#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("siddu.txt", "r");

    char ch;

    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)      //EOF=End Of File 
        {
            break;    //stops reading after content of file is finished..
        }
    }

    printf("%c", ch);

    return 0;
}