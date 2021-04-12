#include <iostream>
#include <math.h>
using namespace std;

int bva(int, int, int);

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
    cout << "a\tb\tc\tOutput\t\t\tRoots" << endl;
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
    cout << "Enter the Coefficients (a, b, c) : ";
    cin >> x >> y >> z;
    cout << "a\tb\tc\tOutput\t\t\tRoots" << endl;
    bva(x, y, z);
    return 0;
}

int bva(int a, int b, int c)
{
    if (a == 0)
    {
        cout << "Not a Quadratic Equation\n";
        return 0;
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    cout << a << "\t" << b << "\t" << c << "\t";
    if (d < 0)
    {
        cout << "Imaginary Roots\t\t";
        cout << -(double)b / (2 * a) << "+i" << sqrt_val << ", ";
        cout << -(double)b / (2 * a) << "-i" << sqrt_val << endl;
    }
    else if (d == 0)
    {
        cout << "Real and Equal\t\t";
        cout << -(double)b / (2 * a) << endl;
    }
    else
    {
        cout << "Real and Distinct\t";
        cout << (double)(-b + sqrt_val) / (2 * a);
        cout << ", " << (double)(-b - sqrt_val) / (2 * a) << endl;
    }
    return 0;
}