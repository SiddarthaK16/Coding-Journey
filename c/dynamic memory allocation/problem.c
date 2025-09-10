#include <stdio.h>
#include<stdlib.h>
int main(){
    int n=10;
    int table=7;

    int* ptr;
    

    ptr=(int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr [i]=7*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n",7,i+1,ptr[i]);
    }
    
    ptr=(int*) realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr [i]=7*(i+1);
    }

    for (int i = 0; i <15; i++)
    {
        printf("%d X %d = %d\n",7,i+1,ptr[i]);
    }

    free(ptr);



    return 0;
}