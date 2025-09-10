#include <stdio.h>

int main(){
    int P;
    float R,T;

    printf("Enter the principal amount :");
    scanf("%d",&P);
     printf("Enter the Rate of interest :");
    scanf("%f",&R);
     printf("Enter the time in years:");
    scanf("%f",&T);

    printf("The Simple interest on your amount %d in %f years at %f interest is %f:",P,T,R,(P*R*T)/100);
    return 0;
}