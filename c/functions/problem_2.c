#include <stdio.h>

float convert(float);

float convert(float x)
{
    return (x * 1.80) + 32;
}
int main()
{
    float c;
    printf("Enter the temperature in celcius :");
    scanf("%f", &c);

    printf("The temperature in fahrenheit is %.2f ", convert(c));
    return 0;
}