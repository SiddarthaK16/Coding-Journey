#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("siddu.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d \n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d \n",num);   //prints 39 here as the pointer keeps moving when reading..
    fclose(ptr);  //stop working with file so it can be freed..
    return 0;
}