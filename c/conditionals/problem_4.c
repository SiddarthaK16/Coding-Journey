#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter the 1st number a :");
    scanf("%d",&a);
    printf("Enter the 2nd number b :");
    scanf("%d",&b);
    printf("Enter the 3rd number c :");
    scanf("%d",&c);
    printf("Enter the 4th number d :");
    scanf("%d",&d);

    if(a>=b&&a>=c&&a>=d){
        printf("The largest number is  %d\n",a);
    }
    else if(b>=c&&b>=d){
        printf("The largest number is  %d\n",b);
    }
    else if(c>=d){
        printf("The largest number is  %d\n",c);
    }
    else {
        printf("The largest number is  %d\n",d);
    }
    return 0;
}