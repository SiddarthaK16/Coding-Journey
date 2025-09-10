#include <stdio.h>

int main()
{
    float phy, maths, chem; // three subjects are PCM

    printf("Enter Your Physics marks :");
    scanf("%f", &phy);
    printf("Enter Your Mathematics marks :");
    scanf("%f", &maths);
    printf("Enter Your Chemistry marks :");
    scanf("%f", &chem);

    float tot = maths + phy + chem;
    float perc = tot / 3;

    if (phy >= 33 && maths >= 33 && chem >= 33 && perc >= 40)
    {
        printf("Congratulations buddy , You are passed with %.2f percentage  marks", perc);//._f = upto_ spaces
    }
    else
    {
        printf("Better luck next time , you failed");
    }

    return 0;
}