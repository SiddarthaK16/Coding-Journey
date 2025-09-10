#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("gopi.txt", "r");
    int num;

    if (ptr == NULL)
    {
        printf("This file does not exist hehe!!"); // ptr = null means file does not exist as ptr is null implies it does not contain any address i.e it is pointing to something which does not exist..
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num); // prints 39 here as the pointer keeps moving when reading..

    }
    fclose(ptr);
    return 0;
}