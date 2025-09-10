#include <stdio.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("module1.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("module2.txt", "w");

    char ch;

    while (1)
    {
        ch = fgetc(ptr1);

        if (ch == EOF) // EOF=End Of File
        {
            break; // stops reading after content of file is finished..
        }

        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c",ch);
        }

        fclose(ptr1);
        fclose(ptr2);
    }

    return 0;
}