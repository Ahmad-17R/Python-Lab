#include <iostream>
#include <conio.h>
using namespace std;

int extendedGCD(int num1, int num2, int &s, int &t);
main()
{
    int num1, num2, s, t;
    while (true)
    {
        cout << "Enter the first positive integer: ";
        cin >> num1;
        cout << "Enter the second positive integer: ";
        cin >> num2;
        if (num1 >= 0 && num2 >= 0)
        {
            int gcdResult = extendedGCD(num1, num2, s, t);
            cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;
            cout << "Bezout coefficients for " << num1 << " and " << num2 << " are s = " << s << ", t = " << t << endl;
            break;
        }
        else
        {
            cout << "Please enter positive integers." << endl;
        }
        cout << "Press Any Key To Continue... ";
        getch();
        system("cls");
    }
}
int extendedGCD(int num1, int num2, int &s, int &t)
{
    if (num1 == 0)
    {
        s = 0;
        t = 1;
        return num2;
    }
    int s1, t1;
    int gcd = extendedGCD(num2 % num1, num1, s1, t1);
    s = t1 - (num2 / num1) * s1;
    t = s1;
    return gcd;
}