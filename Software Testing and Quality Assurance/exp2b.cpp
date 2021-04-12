#include <iostream>
using namespace std;

void bva(int, int, int);

int main()
{
    int amin, amax, bmin, bmax, cmin, cmax;
    int x, y, z;
    cout << "Enter Range for Day : ";
    cin >> amin >> amax;
    cout << "Enter Range for Month : ";
    cin >> bmin >> bmax;
    cout << "Enter Range for Year : ";
    cin >> cmin >> cmax;
    if (amin < 1 || amax > 31)
    {
        cout << "Invalid Day Range";
        return 0;
    }
    if (bmin < 1 || bmax > 12)
    {
        cout << "Invalid Month Range";
        return 0;
    }
    if (cmin < 1900 || amax > 2025)
    {
        cout << "Invalid Year Range";
        return 0;
    }
    int anominal = (amin + amax) / 2;
    int avalues[] = {amin, amin + 1, anominal, amax - 1, amax};
    int bnominal = (bmin + bmax) / 2;
    int bvalues[] = {bmin, bmin + 1, bnominal, bmax - 1, bmax};
    int cnominal = (cmin + cmax) / 2;
    int cvalues[] = {cmin, cmin + 1, cnominal, cmax - 1, cmax};
    cout << "Day\tMonth\tYear\tExpected Output" << endl;
    for (int i = 0; i < 5; i++)
        bva(avalues[i], bnominal, cnominal);
    for (int i = 0; i < 5; i++)
        bva(anominal, bvalues[i], cnominal);
    for (int i = 0; i < 5; i++)
        bva(anominal, bnominal, cvalues[i]);
    cout << "Enter the Day, Month and Year : ";
    cin >> x >> y >> z;
    cout << "Day\tMonth\tYear\tExpected Output" << endl;
    bva(x, y, z);
    return 0;
}

void bva(int a, int b, int c)
{
    cout << a << "\t" << b << "\t" << c << "\t";
    if (a != 1)
    {
        if ((b == 2 || b == 4 || b == 6 || b == 9 || b == 11) & (a == 31))
            cout << "Invalid Date" << endl;
        else if ((b == 2) & (a == 30))
            cout << "Invalid Date" << endl;
        else if ((b == 2) & (a == 29) & (c % 4 != 0))
            cout << "Invalid Date" << endl;
        else
            cout << a - 1 << "-" << b << "-" << c << endl;
    }
    else
    {
        if (b == 3)
        {
            if (c % 4 == 0)
                a = 29;
            else
                a = 28;
        }
        cout << a << "-" << b - 1 << "-" << c << endl;
    }
}
