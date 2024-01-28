#include <iostream>
#include <conio.h>
using namespace std;

int GCD(int num1, int num2);
int LCM(int num1, int num2);
main()
{
    int num1, num2;
    while (true)
    {
        cout << "Enter the first positive integer: ";
        cin >> num1;
        cout << "Enter the second positive integer: ";
        cin >> num2;
        if (num1 > 0 && num2 > 0)
        {
            int result = LCM(num1, num2);
            cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;
            break;
        }
        else
        {
            cout << "Please enter positive integers greater than 0." << endl;
        }
        cout << "Press Any Key To Continue... ";
        getch();
        system("cls");
    }
}
int GCD(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
int LCM(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        return 0;
    }
    return abs(num1 * num2) / GCD(num1, num2);
}