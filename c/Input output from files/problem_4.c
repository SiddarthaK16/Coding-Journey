#include <stdio.h>

int main(){
    int num;
    FILE *ptr1;
    FILE *ptr2;

    ptr1=fopen("number.txt","r");
    ptr2=fopen("number double.txt","w");

    fscanf(ptr1,"%d",&num);

    fprintf(ptr2,"%d",num*2);

    return 0;
}