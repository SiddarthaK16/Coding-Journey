#include <stdio.h>
 struct employee
{
    int code; // these three declare a data type
    float salary;
    char name[30];
};

void display(struct employee e){
     printf("%d %.2f %s",e.code,e.salary,e.name);  //function definining
}
int main(){
    
    struct employee e1 = {101, 55000.50, "John Doe"};
    display(e1);
    return 0;
}