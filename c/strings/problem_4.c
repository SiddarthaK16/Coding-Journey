#include <stdio.h>
int myStrLen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {  // keep counting until null character
        length++;
    }
    return length;
}
void copy(char strx[],char stry[]){
    
    for (int i = 0; i < myStrLen(strx); i++)
    {
        stry[i]=strx[i];
    }
    stry[myStrLen(strx)]='\0';

}
int main(){
    char str1[40]="BEach";
    char str2[50];

    copy(str1,str2);

    printf("str1 and str2 is now %s and %s",str1,str2);


    


    return 0;
}