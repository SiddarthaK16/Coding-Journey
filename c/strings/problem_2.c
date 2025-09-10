#include <stdio.h>

int main(){
    char str[39];
    printf("Enter the string :");
    scanf(" %[^\n]",str);

    int i=0;
    char c=str[i];

    while (c!='\0')
    {
       c=str[i];
       i++;
    }

    printf("The lenth of string is %d \n",i);

    return 0;
}