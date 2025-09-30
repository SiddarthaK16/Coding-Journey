/*
n=4

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1




*/

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < 4; i++)
    {
        int num = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << num << " ";
            num++;
        }
        for (int l = i ; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << "\n";
    }

    return 0;
}