#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("module2.c", "w");

    if(ptr==NULL){
        printf("FIle does not exist!!!");
    }
    int i;

    int x;
    printf("Enter whose table you wanna know :");
    scanf("%d", &x);

    for (i = 1; i <= 10; i++)
    {
        
        fprintf(ptr, "%d X %d = %d \n", x, i, x*i);
    }

    fclose(ptr);

    return 0;
}