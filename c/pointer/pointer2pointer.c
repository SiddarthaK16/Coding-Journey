#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;  //this is a pointer k pointing to a pointer j..
    int ***l=&k;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    printf("The value of i is %d\n", ****(&l));
    

    return 0;
}