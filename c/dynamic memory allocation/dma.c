#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;

    scanf("%d",&n);

    //int array[n];  //not allowedd in C with this syntax

    ptr=(int*) malloc(n * sizeof(int));   //this is syntax..
    //malloc returns a null pointer.. so to type cast you have to declare type before it..

    ptr[0]=23;
    ptr[1]=12;

    printf("%d",ptr[1]);
    return 0;

    free(ptr);
}