#include <stdio.h>

int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {   // i=0-------1 star
          // i=1-------3 stars
        
        
         
        for (int j = 0; j < 2 * i + 1; j++)
        { 
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}