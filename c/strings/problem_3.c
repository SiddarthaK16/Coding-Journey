#include <stdio.h>
#include<string.h>
void slice(char str[],int x,int m,int n){
      if(m>=x || n>x || m<0 || n<0){
        printf("Not valid slicing indices!!!");
      }
    
      for (int j = m; j <=n; j++)
        {
            printf("The sliced string is %c",str[j]);
        }
        printf("\n");
        
    
    
}
int main(){
    int m,n;
    
    char str[100];
    
    printf("Enter the string :");
    scanf("%s",str);  
    int x=strlen(str);
    printf("Enter the starting index of slicing :");
    scanf("%d",&m);
    printf("Enter the ending index of slicing :");
    scanf("%d",&n);

    slice(str,x,m,n);
    return 0;
}