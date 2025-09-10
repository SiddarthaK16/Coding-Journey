#include <stdio.h>
#include <math.h>
int main(){
    float a=3.00;
    float b=10.00;

    int c= a+b;
    int d= a-b;
    int e=a*b;
    float f=a/b;
    float g=(int)b%(int)a;//modulo only for integers in C
    int h=pow(a,b);

    printf("The sum of numbers is %d , difference is %d , product is %d , division is %f , remainder is %f and a power b is %d",c,d,e,f,g,h);
    
    return 0;
}