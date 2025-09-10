#include <stdio.h>
#include<stdlib.h>

int main(){
    int n=4;
    int* ptr;

    scanf("%d",&n);

    

    ptr=(int*) malloc(4 * sizeof(int));   

    ptr[0]=23;
    ptr[1]=12;

    ptr= (int*) realloc(ptr, 8*sizeof(int));   

    //now it will create an array of length of 8 instead of 4 in malloc..

    free(ptr);
    return 0;
}