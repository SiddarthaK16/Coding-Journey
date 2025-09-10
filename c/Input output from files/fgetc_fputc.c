#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("module1.txt", "r");

    char c = fgetc(ptr);  //reads a char from file

    printf("%c", c);

    //fputc('P',ptr);     //writes a char into file
    

    fclose(ptr);

    return 0;
}