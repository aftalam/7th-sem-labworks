#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum;
    cout << "Enter the value of Angle (a) : ";
    cin >> a;
    cout << "Enter the value of Angle (b) : ";
    cin >> b;
    cout << "Enter the value of Angle (c) : ";
    cin >> c;
    if (a > -1 && a < 101)
    {
        if (b > -1 && b < 101)
        {
            if (c > -1 && c < 101)
            {
                sum = a + b + c;
                if (sum == 180)
                {
                    if (a == 90 || b == 90 || c == 90)
                    {
                        cout << "\n Right Angled Triangle";
                    }
                    else if (a > 90 || b > 90 || c > 90)
                    {
                        cout << "\n Obtuse Angled Triangle";
                    }
                    else if (a < 90 && b < 90 && c < 90)
                    {
                        cout << "\n Acute Angled Triangle";
                    }
                }
                else
                {
                    cout << "\n Not a Tirangle...";
                }
            }
            else
            {
                cout << "\n Angle (c) out of range...";
            }
        }
        else
        {
            cout << "\n Angle (b) out of range...";
        }
    }
    else
    {
        cout << "\n Angle (a) out of range...";
    }
    return 0;
}