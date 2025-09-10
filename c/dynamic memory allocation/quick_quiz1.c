#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n=5;
    float *ptr;
    srand(time(0));

    ptr = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        ptr [i]= rand()%100 +5;
    }

    printf("%f %f %f %f %f",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);

    free(ptr);
    

    return 0;
}