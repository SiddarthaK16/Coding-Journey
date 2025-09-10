#include <stdio.h>

int main()
{
    int a = 89;
    int *ptr = &a;

    printf("The address of a is %u\n", &a);
    printf("The value of ptr is %u\n", ptr); 
    // everytime you run program , you need not get same memory location assigned... it may or maynot changeee

    ptr++;

    printf("The value of ptr is %u\n", ptr); //by 4 bytes as data type of ptr is int

    return 0;
}