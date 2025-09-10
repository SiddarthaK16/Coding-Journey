#include <stdio.h>
#include <string.h>
int main()
{

    char pass[100];
    printf("Enter your encrytpted password for decryption :");
    scanf("%s", pass); // do not use & for arrays and strings...
    for (int i = 0; i < strlen(pass); i++)
    {
        pass[i] = pass[i] - 21;
    }

    printf("You can hack , my passowrd is %s", pass);
    return 0;
}