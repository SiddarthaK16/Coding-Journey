#include <stdio.h>

int main(){
    int array[3][5][6];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                printf("%u ",&array[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}