#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the length of the rectangle:");
    scanf("%d",&a);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&b);

    int c=a*b;
    printf("The area of the rectangle is %d :",c);
    return 0;

}