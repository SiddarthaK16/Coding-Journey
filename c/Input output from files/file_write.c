#include <stdio.h>

int main(){
     FILE *ptr;
    ptr=fopen("siddu.txt","a");     //writes at end of the file
    int num=16;
    fprintf(ptr,"%d",num);
    

    fclose(ptr);
    

    return 0;
}