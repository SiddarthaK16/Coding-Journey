#include <stdio.h>

int main(){
    int n,x=1,i=1;
    printf("Enter n :");
    scanf("%d",&n);

   /* for(int i=1;i<=n;i++){     //do not forget to initialise any variable which u use in loop
         x*=i;
    }*/

    while (i<=n)
    {
        x=x*i;
        i++;            //never forget increment or decrement unless u wanna kill your laptop
    } 
    
  printf("The factorial of %d is %d",n,x);

    return 0;
}