#include <stdio.h>

int positive(int array[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            count++;
        }
    }
    printf("The positive numbers in the array are %d", count);
}
int main()
{
    int array[] = {21, 29, -1, -23, 92};
    positive(array, 5);
    return 0;
}