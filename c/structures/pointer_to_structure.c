#include <stdio.h>

struct employee
{
    int code; // these three declare a data type
    float salary;
    char name[30];
};

int main(){
    
    struct employee e1={2343,43.5,"Siddu"};
    struct employee *ptr;
    
    ptr=&e1;

    //printf("%d %f %s",(*ptr).code,(*ptr).salary,(*ptr).name);

    printf("%d %f %s",ptr->code,ptr->salary,ptr->name);  //arrow operator swag
   
    
    return 0;
}