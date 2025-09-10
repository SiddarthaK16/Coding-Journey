#include <stdio.h>

struct vector
{
    int magnitude1;
    int magnitude2;
    char direction1;
    char direction2; // i or j || j or k || k or i as we need 2D vector
};

int main()
{
    
    struct vector v1;

    printf("Enter the magnitude of vector in first dimension :");
    scanf("%d", &v1.magnitude1);
    printf("Enter the magnitude of vector in second dimension :");
    scanf("%d", &v1.magnitude2);
    printf("Enter the plane of first dimension :");
    scanf(" %c", &v1.direction1);
    printf("Enter the plane of second dimension :");
    scanf(" %c", &v1.direction2);

    printf("%d%c + %d%c", v1.magnitude1, v1.direction1, v1.magnitude2, v1.direction2);

    return 0;
}