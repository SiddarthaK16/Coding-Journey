/*#include <stdio.h>

int main(){
    typedef int Siddu;   //here siddu is a data type which stores int values
    Siddu a=143;
    printf("%d",a);
    return 0;
}*/

#include <stdio.h>
typedef struct employee
{
    int code; // these three declare a data type
    float salary;
    char name[30];
} Emp; // naming of struct employee datatype for conviniecne
int main()
{
    // also typedef struct employee Emp can be done here if not while declaring struture
    Emp e1 = {101, 55000.50, "John Doe"};
    printf("%d %.2f %s", e1.code, e1.salary, e1.name);
    return 0;
}