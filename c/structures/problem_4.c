#include <stdio.h>

typedef struct bankAccount{
    int acc;
    char IFSC[13];
    char name[20];
}bank;
int main(){
    
    bank user;

    printf("Welcome to our bank dear customer!!\n");

    printf("Enter your account number :");
    scanf("%d",&user.acc);
    printf("Enter your IFSC code  :");
    scanf("%s",user.IFSC);
    printf("Enter your name  :");
    scanf("%s",user.name);

    printf("Welcome to our bank Mr./Miss./Mrs. %s , the request for fetching balance of your accound with account number %d has been submitted successfully!!\n",user.name,user.acc);
    printf("Thank You!!!!");

    
    return 0;
}