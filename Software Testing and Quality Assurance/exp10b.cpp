#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "Enter Date : ";
    cin >> d;
    cout << "Enter Month : ";
    cin >> m;
    cout << "Enter Year : ";
    cin >> y;
    const char *Names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day = 0;
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    day = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
    cout << "Day : " << Names[day] << endl;
    return 0;
}