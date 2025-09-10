#include <stdio.h>

void sum(int*x,int*y){
    
    printf("The sum is %d \n",*x+*y);
}

void average(int*x , int*y){
    printf("The average is %d \n",(*x+*y)/2);
}
int main(){
    int i,j;
    i=10;
    j=20;

    int* k=&i;
    int* l=&j;
    
    sum(&i,&j);
    average(&i,&j);

    return 0;
}