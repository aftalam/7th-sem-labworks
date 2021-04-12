#include <iostream>
using namespace std;

float circle()
{
    float r;
    cout << "Enter the Radius of Circle (r) : ";
    cin >> r;
    if (r < 1 || r > 100)
    {
        cout << "Out of Range";
        return 0;
    }
    float area = 3.14 * r * r;
    return area;
}

float triangle()
{
    float b, h;
    cout << "Enter the Base and Height of Triangle (b, h) : ";
    cin >> b >> h;
    if (b < 1 || b > 100 || h < 1 || h > 100)
    {
        cout << "Out of Range";
        return 0;
    }
    float area = 0.5 * b * h;
    return area;
}

float square()
{
    float s;
    cout << "Enter the Side of Square (s) : ";
    cin >> s;
    if (s < 1 || s > 100)
    {
        cout << "Out of Range";
        return 0;
    }
    float area = s * s;
    return area;
}

float rectangle()
{
    float l, b;
    cout << "Enter the Length and Breadth of Rectangle (l, b) : ";
    cin >> l >> b;
    if (l < 1 || l > 100 || b < 1 || b > 100)
    {
        cout << "Out of Range";
        return 0;
    }
    float area = l * b;
    return area;
}

int main()
{
    int ch;
    float area;
    cout << "Area of : \n 1. Circle \n 2. Square \n 3. Triangle \n 4. Rectangle";
    cout << "\nEnter Choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        area = circle();
        cout << "Area : " << area;
        break;
    case 2:
        area = square();
        cout << "Area : " << area;
        break;
    case 3:
        area = triangle();
        cout << "Area : " << area;
        break;
    case 4:
        area = rectangle();
        cout << "Area : " << area;
        break;
    default:
        cout << "Wrong Choice";
    }
    return 0;
}