#include <stdio.h>
#include<string.h>
int main(){
    char s1[40];
    char s2[30];

    printf("Enter the first string :");
    scanf("%s",&s1);
    printf("Enter the second string :");
    scanf("%s",&s2);

    int a=strcmp(s1,s2);

    if(a==0){
        printf("Both the strings are equal!!");
    }
    else if (a<0)
    {
        printf("Second string s2 :%s is greater.",s2);
    }
    else{
        printf("Second string s2 :%s is greater.",s2);
    }
    

    return 0;
}