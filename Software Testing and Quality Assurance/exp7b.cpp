#include <iostream>
using namespace std;

int main()
{
    float basic, HRA, DA, CM, tax, PF, TA, total_salary;
    printf("Enter the Basic Salary of Employee : ");
    cin >> basic;
    HRA = (basic * 3) / 100;
    DA = (basic * 8) / 100;
    CM = 100;
    tax = 300;
    PF = 780;
    TA = 800;
    cout << "HRA = " << HRA << ", DA = " << DA << ", CM = " << CM << ", Tax = " << tax << ", PF = " << PF << ", TA = " << TA;
    total_salary = (basic + HRA + DA + TA) - (tax + CM + PF);
    cout << "\n Total Salary of Employee = " << total_salary;
    return 0;
}