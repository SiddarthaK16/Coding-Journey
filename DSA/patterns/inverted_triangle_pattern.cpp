/*
n=4

1 1 1 1
  2 2 2
    3 3
      4



*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        // print leading spaces ONCE per row
        for (int k = 0; k < i; k++) {
            cout << "  "; // two spaces for neat alignment
        }

        // print numbers for this row
        for (int j = i; j < n; j++) {
            cout << i + 1 << " ";
        }

        cout << "\n";
    }

    return 0;
}
