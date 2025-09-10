#include <stdio.h>

int sum(int,int);         //function prototype

int sum(int x, int y){
    printf("The sum of numbers is %d \n",x+y);        //function definition
}

int main(){
    int a=12;
    int b=23;
    
    sum(a,b);          //funtion calling

    int c=32;
    int d=98;

    sum(c,d);           //funtion calling

    int x=99;
    int y=0;

    sum(x,y);            //funtion calling

    return 0;
}