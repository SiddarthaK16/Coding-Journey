/*
n=4

*      *                         i=0--->6 spaces , i=1--->4 spaces , i=2--->2 spaces , i=3---->0 space
**    **     //left and right    
***  ***
********
********
***  ***     //left and right   
**    **                          i=0--->0 spaces , i=1--->2 spaces , i=2---->4 spaces , i=3 --->6 spaces
*      *



*/


#include <iostream>
using namespace std;

int main() {
    int n=10;

   for (int i = 0; i < n; i++)     //top
   {
    for (int j = 0; j <= i; j++)
    {
        cout << "*";        //left done
    }
    //right part

    for (int k = 0; k < (n+2)-2*i; k++)
    {
          cout << " ";                           //leading spaces
    }
    
    for (int j = 0; j <=i; j++)
    {
        cout << "*";         //right done
    }
    cout << "\n";

    
   }

    for (int i = 0; i < n; i++)     //bottom
   {
    for (int j = 0; j < n-i; j++)
    {
        cout << "*";        //left done
    }
    //right part

    for (int k = 0; k < 2*i; k++)
    {
          cout << " ";                           //leading spaces
    }
    
    for (int j = 0; j <n-i; j++)
    {
        cout << "*";         //right done
    }
    cout << "\n";

    
   }

   
   
   
    return 0;
}