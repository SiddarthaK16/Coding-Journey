/*
n=3

123
456
789



*/

#include <iostream>
using namespace std;

int main() {
    int n=3;
    int num=1;
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n; j++)
        {
           cout << num << " ";
           num++; 
            
        }
        cout << "\n";
        
    }
    return 0;
}