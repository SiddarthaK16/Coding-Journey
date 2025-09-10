#include <stdio.h>

int main(){
    int i=3;
    do{
        printf("The value of i is %d \n",i);   //do while is atleast excecuted once as it does the tast first and then checks the condition
        i++;
    } while(i<3);

    /*while(i<3){
        printf("The value of i is %d \n",i);  //while loop may not excecute even for once as it checks condition first and then only executes
        i++;
    }*/
      
      
    return 0;
}