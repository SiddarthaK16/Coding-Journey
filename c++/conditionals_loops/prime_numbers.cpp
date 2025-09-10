#include <iostream>
using namespace std;

int main() {
    int n=99;
    bool isPrime=true;

    for (int i = 2; i*i<= n; i++)    //optimised which says i<=root(n) simple cuz after root n factors will be repeateddd...
    {
        if (n%i==0)
        {
            isPrime=false;
            break;
        }
        
    }
    
    if (isPrime==true)
    {
        cout << "Prime number";
    }
    else 
    {
        cout << "Not a Prime number";
    }
    
    return 0;
}