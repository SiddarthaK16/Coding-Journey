/*

n=5

1234554321              i=0 --->0 i=1--->2  i=2--->3  i=3---> 5
1234 4321
123   321
12     21
1       1
12     21               i=0 ----->5    i=1--->3    i=2---->1   i=3--->0
123   321
1234 4321
1234554321






*/


#include <iostream>
using namespace std;

int main() {
    int n=10;

    for (int i = 0; i < n; i++)    //top one
    { int num=1;
        for (int j = i; j < n; j++)
        {
            cout << num ;
            num++;
        }
        for (int k = 0; k <(2*i)-1; k++)
        {
            cout << " ";
        }

        for (int l = n-i; l>=1; l--)
        {
            cout << l;
        }
        cout << '\n';
        
        
    }

    for (int i = 1; i < n; i++) {  
    int num = 1;

    // Left side numbers
    for (int j = 1; j <= i+1; j++) {
        cout << num;
        num++;
    }

    // Spaces
    for (int k = 0; k < 2*(n-i-1)-1; k++) {
        cout << " ";
    }

    // Right side numbers
    for (int l = i+1; l >= 1; l--) {
        cout << l;
    }

    cout << "\n";
}

    
    return 0;
}