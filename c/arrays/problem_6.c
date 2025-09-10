#include <stdio.h>

int main()
{
    /* int table[3][10];
     int n1,n2,n3;

     printf("Enter three numbers whgose tables who want to know :");
     scanf("%d %d %d",&n1,&n2,&n3);

     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 10; j++)
         {
             if (i == 0)
             {
                 table[i][j] = n1 * (j + 1);
                 printf("%d X %d = %d \n",n1, j + 1, table[i][j]);
             }
             else if (i == 1)
             {
                 table[i][j] = n2 * (j + 1);
                 printf("%d X %d = %d \n",n2, j + 1, table[i][j]);
             }
             else if (i == 2)
             {
                 table[i][j] = n3 * (j + 1);
                 printf("%d X %d = %d \n",n3, j + 1, table[i][j]);
             }

             {
             }
         }
         printf("\n");
     }*/

    int table[3][10];
    int n1,n2,n3;
    printf("Enter three numbers whose tables you wanna know :");
    scanf("%d %d %d",&n1,&n2,&n3);
    int numbers[] = {n1, n2, n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = numbers[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)   //easy peazy lemon sqeezy
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of array[%d][%d] is %d \n", i, j, table[i][j]);
        }
        printf("\n");
    }

    return 0;
}