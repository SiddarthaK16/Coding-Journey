#include <iostream>
using namespace std;

int main() {
    int n=10;

    cout << (n>>1);
    return 0;
}

/*

shifts every position by i places to right i.e pops out last i places out(n<<i)
a>>b ---> a/2powb

*/