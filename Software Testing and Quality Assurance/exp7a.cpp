#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    float a1, a2, a3;
    int valid = 0;
    cout << "Enter First Side of Triangle (a) : ";
    cin >> a;
    cout << "Enter Second Side of Triangle (b) : ";
    cin >> b;
    cout << "Enter Third Side of Triangle (c) : ";
    cin >> c;
    if (a > 0 && a <= 100 && b > 0 && b <= 100 && c > 0 && c <= 100)
    {
        if ((a + b) > c && (b + c) > a && (c + a) > b)
            valid = 1;
        else
            valid = -1;
    }
    if (valid == 1)
    {
        a1 = (a * a + b * b) / (c * c);
        a2 = (b * b + c * c) / (a * a);
        a3 = (c * c + a * a) / (b * b);
        if (a1 < 1 || a2 < 1 || a3 < 1)
            cout << "Obtuse Angled Triangle";
        else if (a1 == 1 || a2 == 1 || a3 == 1)
            cout << "Right Angled Triangle";
        else
            cout << "Acute Angled Triangle";
    }
    else if (valid == -1)
        cout << "Invalid Triangle";
    else
        cout << "Out of Range";
    return 0;
}