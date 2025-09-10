#include <stdio.h>

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
                                       //logic
    /*for i from 0 to n/2
    swap arr[i] with arr[n-i-1]*/

    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int hehe[] = {37, 93, 82, 36, 98};
     printf("The original array is :");
     print(hehe, 5);

     reverse(hehe,5);

     printf("The reversed array is :");
     print(hehe,5);

    return 0;
}