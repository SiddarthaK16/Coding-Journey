#include <stdio.h>

int main(){
    int marks[]={92,97,93,87,62,87,87,89,78,100};

    int *ptr=marks;

    printf("The value of ptr is %d\n",*ptr);
    printf("The value of ptr+2 is %d\n",*(ptr+2));
    return 0;
}