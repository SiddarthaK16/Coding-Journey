/*n=4

A B C D
A B C D
A B C D
A B C D


*/

#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i = 1; i <=  n; i++)  //outer loop ---> how many lines/rows
    {   char ch='A'; 
        for (int j = 1; j<=n; j++)  //what inside those rows / logic
        {
            cout<< ch ;
            ch+=1;
        }

        cout<< "\n";
        
    }
    
    return 0;
}