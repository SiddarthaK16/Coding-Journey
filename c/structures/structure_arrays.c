#include <stdio.h>

struct employee
{
    int code; // these three declare a data type
    float salary;
    char name[30];
};

int main(){
    struct employee facebook[100]; // an array of structures
    
    for (int i = 1; i <=100; i++)
    {
         printf("\nEnter employee %d code: ", i);
        scanf("%d", &facebook[i].code);

        printf("\nEnter salary of employee %d: ", i);         //input loop
        scanf("%f", &facebook[i].salary);

        printf("\nEnter name of employee %d: ", i);
        scanf("%s", facebook[i].name);  
    }

     printf("\n--- Employee Details ---\n");
    for (int i = 1; i <=100; i++) {                      //output loop
        printf("%d %.2f %s\n", facebook[i].code, facebook[i].salary, facebook[i].name);
    }
    
    
    return 0;

}



/*structures can also be initialised as struct employee ={943,393,"NAme"}*/