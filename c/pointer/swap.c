#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;    //ratt loooo
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}