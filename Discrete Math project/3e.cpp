#include <iostream>
#include <conio.h>
using namespace std;
int extendedGCD(int num1, int num2, int &s, int &t);
int Inverse(int num1, int num2);

main()
{
    int num1, num2;
    while (true)
    {
        cout << "Enter the first positive integer (num1): ";
        cin >> num1;
        cout << "Enter the second positive integer (num2): ";
        cin >> num2;
        if (num1 >= 0 && num2 >= 0)
        {
            int inverse = Inverse(num1, num2);
            if (inverse != -1)
            {
                cout << "The inverse of " << num1 << " modulo " << num2 << " is: " << inverse << endl;
            }
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

int Inverse(int num1, int num2)
{
    int s, t;
    int gcdResult = extendedGCD(num1, num2, s, t);
    if (gcdResult == 1)
    {
        return ((s % num2) + num2) % num2;
    }
    else
    {
        cout << "Inverse does not exist as " << num1 << " and " << num2 << " are not relatively prime with gcd not equal to 1." << endl;
        return -1;
    }
}