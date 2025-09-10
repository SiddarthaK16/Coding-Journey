#include <stdio.h>

int main(){
    int marks[]={89,83,93,93};

    int *ptr=&marks[0];  //int *ptr=marks would be the same fyi

    for ( int i = 0; i < 4; i++)
    {
        //printf("The marks at index %d is %d \n",i,marks[i]);
        printf("The marks at index %d is %d \n",i,*ptr);
        ptr++;                            //increment in ptr both lines will give same output
    }
    
    return 0;
}