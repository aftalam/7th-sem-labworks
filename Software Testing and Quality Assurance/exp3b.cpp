#include <iostream>
using namespace std;

void bva(int, int, int);

int main()
{
    int min, max;
    int x, y, z;
    cout << "Enter Range : ";
    cin >> min >> max;
    if (min < 0 || max > 100)
    {
        cout << "Invalid Range";
        return 0;
    }
    int nominal = (min + max) / 2;
    int values[] = {min, min + 1, nominal, max - 1, max};
    cout << "a\tb\tc\tOutput" << endl;
    for (int i = 0; i < 5; i++)
    {
        bva(values[i], nominal, nominal);
    }
    for (int i = 0; i < 5; i++)
    {
        if (values[i] != nominal)
            bva(nominal, values[i], nominal);
    }
    for (int i = 0; i < 5; i++)
    {
        if (values[i] != nominal)
            bva(nominal, nominal, values[i]);
    }
    cout << "Enter the Sides of Triangle (a, b, c) : ";
    cin >> x >> y >> z;
    cout << "a\tb\tc\tOutput" << endl;
    bva(x, y, z);
    return 0;
}

void bva(int a, int b, int c)
{
    cout << a << "\t" << b << "\t" << c << "\t";
    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100)
        cout << "Invalid Range" << endl;
    else if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
            cout << "Right Angled Triangle" << endl;
        else if ((a * a > b * b + c * c) || (b * b > c * c + a * a) || (c * c > a * a + b * b))
            cout << "Obtuse Angled Triangle" << endl;
        else
            cout << "Acute Angled Triangle" << endl;
    }
    else
        cout << "Not a Triangle" << endl;
}