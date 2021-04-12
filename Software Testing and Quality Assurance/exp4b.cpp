#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the Sides of Triangle (a, b, c) : ";
    cin >> a >> b >> c;
    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100)
        cout << "Out of Range" << endl;
    else if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        if ((a == b) && (b == c))
            cout << "Equilateral Triangle" << endl;
        else if ((a != b) && (b != c) && (c != a))
            cout << "Scalene Triangle" << endl;
        else
            cout << "Isosceles Triangle" << endl;
    }
    else
        cout << "Not a Triangle" << endl;
    return 0;
}