#include <stdio.h>

float average(float, float, float);

float average(float x, float y, float z)
{
    return (x + y + z) / 3;
}

int main()
{
    float a, b, c;
    printf("Enter the 1st number : \n");
    scanf("%f", &a);
    printf("Enter the 2nd number : \n");
    scanf("%f", &b);
    printf("Enter the 3rd number : \n");
    scanf("%f", &c);

    printf("The average of these three numbers is %.2f \n", average(a, b, c));

    return 0;
}