#include <stdio.h>

void tentimes(int*x){
    printf("%d",(*x)*10);
}
int main(){
    int i=2;
    int* j=&i;

    tentimes(&i);
    return 0;
}