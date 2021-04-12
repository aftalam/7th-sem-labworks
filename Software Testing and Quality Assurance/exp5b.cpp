#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, result;
    cout << "Enter First Variable (a) : ";
    cin >> a;
    cout << "Enter Second Variable (b) : ";
    cin >> b;
    result = pow(a, b);
    cout << "Result (a^b) = " << result;
    return 0;
}