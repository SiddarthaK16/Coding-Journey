#include <stdio.h>

int main(){
    //char str[]={'S','I','D','D','U','\0'} ;   //null character is \0
    char str[]="SIDDU";    //in "" C automatically puts a blank space
    /*for (int i = 0; i <=5; i++)
    {
        printf("Character is %c \n",str[i]);
    }*/

    printf("%s",str);  //easy way of printing string
    
    return 0;
}