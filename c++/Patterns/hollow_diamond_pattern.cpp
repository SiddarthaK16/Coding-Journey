#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // top half
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++)
            cout << " ";
        cout << "*";
        for (int l = 0; l < 2*i - 3; l++)
            cout << " ";
        if (i > 1) cout << "*";
        cout << "\n";
    }

    // bottom half
    for (int i = n-1; i >= 1; i--) {
        for (int j = 0; j < n-i; j++)
            cout << " ";
        cout << "*";
        for (int l = 0; l < 2*i - 3; l++)
            cout << " ";
        if (i > 1) cout << "*";
        cout << "\n";
    }

    return 0;
}
