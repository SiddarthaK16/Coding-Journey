#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << "\n"; // first does the job and then checks codnition i.e it will be executed atleast oncee no matter what..
        i++;
    } while (i <= 5);

    return 0;
}