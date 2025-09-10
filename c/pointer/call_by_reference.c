#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    *a = 6; // Sum function can change x using address of x

    /*visualise a you cannot break someone TV by clicking their TVs picture and breaking it.. it is call by value stuff..
     now if u have keys to someones house , you can bash into their address and break their tv... this is call by reference stuff..*/
    return *a + *b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}