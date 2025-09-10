#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = {"SIDDUUUU"};
    char brr[20];
    int a = strlen(str);

    strcpy(brr, str); // copied str into brr..
    printf("The length of str is %d \n", a);
    printf("%s \n", brr);

    char hurr[] = {"Hellowww"};

    strcat(str, hurr); // str=str+hurr

    printf("%s \n", str);

    int x=strcmp("lunny","funny");

    printf("%d \n",x);

    return 0;
}