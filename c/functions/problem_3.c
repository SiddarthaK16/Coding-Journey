#include <stdio.h>

float FOA(float);

float FOA(float m)
{
    return m * 9.8;
}

int main()
{
    float m;
    printf("Enter the mass of the body in kg :");
    scanf("%f", &m);

    printf("The force of attraction of this body dur to gravity is %.2f N", FOA(m));
    return 0;
}