/*
n=4

1
22
333
4444


*/

#include <iostream>
using namespace std;

int main() {
    int n=4;

    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j<=i+1; j++)
        {
            cout << i+1 << " ";
        }

        cout << "\n";
    }
    
    return 0;
}