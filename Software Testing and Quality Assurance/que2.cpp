#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an Integer : ";
    cin >> x;
    if (x % 2 == 0)
        cout << x << " is Even";
    else
        cout << x << " is Odd";
    return 0;
}