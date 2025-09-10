#include<stdio.h>

int main(){

    /*int r;
    printf("Enter the radius of the circle :");
    scanf("%f",&r);
    float area=3.14*r*r;          //for circle
    printf("The area of the circle is %f",area);
    return 0;*/

    float r,h;
    printf("Enter the radius of the cylinder:");
    scanf("%f",&r);
     printf("Enter the height of the cylinder:");
    scanf("%f",&h);

    printf("The volume of the cylinder is %f", 3.14*r*r*h);
    return 0;
}