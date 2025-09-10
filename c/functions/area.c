#include <stdio.h>
#include <math.h>

int main() {
    double side, area;
    printf("Enter side length: ");
    scanf("%lf", &side);

    area = pow(side, 2); // pow(base, exponent) returns double datatype
    printf("Area = %.2f\n", area);

    return 0;
}
