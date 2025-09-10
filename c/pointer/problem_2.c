#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int i=12;
    int a=8;
    int* j=&i;

    printf("The address of i is %u",j);
    
    sum(i,a);

    printf("The address of i is %u",j);
    return 0;
}