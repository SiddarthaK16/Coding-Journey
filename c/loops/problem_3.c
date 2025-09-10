#include <stdio.h>

int main(){
    int i=0;
    int sum = 0;
    
   /* while(i<=10){
        sum+=i;                 //adds i values in sum
        i++;
    }*/

    /*for(i=0;i<11;i++){
        sum+=i;
    }*/

    do{
        sum+=i;
        i++;
    }while(i<=10);
    
    printf("The sum of first n natural numbers is %d",sum);
    return 0;
}