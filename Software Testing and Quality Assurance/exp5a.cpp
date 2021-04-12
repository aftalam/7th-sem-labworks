#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "Enter the Day, Month and Year (d, m, y) : ";
    cin >> d >> m >> y;
    if (d != 1)
    {
        if ((m == 2 || m == 4 || m == 6 || m == 9 || m == 11) & (d == 31))
            cout << "Invalid Date" << endl;
        else if ((m == 2) & (d == 30))
            cout << "Invalid Date" << endl;
        else if ((m == 2) & (d == 29) & (y % 4 != 0))
            cout << "Invalid Date" << endl;
        else
            cout << "Previous Date : " << d - 1 << "-" << m << "-" << y << endl;
    }
    else
    {
        if (m == 3)
        {
            if (y % 4 == 0)
                d = 29;
            else
                d = 28;
        }
        cout << "Previous Date : " << d << "-" << m - 1 << "-" << y << endl;
    }
    return 0;
}