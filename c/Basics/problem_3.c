#include<stdio.h>
int main(){

    float c;
    printf("Enter the temperature in Celcius :");
    scanf("%f",&c);
    printf("Entered temperature in Farenhiet is %f", c*(9.0/5)+32); //if u want to get float , atleast one in division should be float value
    return 0;
}