/*
n=5

     *        i=0 ---->k=1   i=1 -----> k=3    i=2--> k=5   i=3--->k=7
    ***   
   *****  
  ******* 
 *********




*/


#include <iostream>
using namespace std;

int main() {
    int n=7;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j >0 ; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < 2*(i+1); k++)
        {
            cout << '*' ;
        }
        cout << "\n";
        
        
    }
    
    return 0;
}