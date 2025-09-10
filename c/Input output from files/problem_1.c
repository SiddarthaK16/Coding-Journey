#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr=fopen("module1.txt","r");
    int num;
    
    for (int i = 0; i <3; i++)
    {
        fscanf(ptr,"%d",&num);
        printf("%d \n",num);
    }
    

    fclose(ptr);
    return 0;
}