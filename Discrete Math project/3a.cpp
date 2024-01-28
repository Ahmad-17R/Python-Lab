#include <iostream>
#include <conio.h>
using namespace std;

void primeFactors(int num);

main()
{
    int num;
    while (true)
    {
        cout << "Enter a positive integer to be factorized: ";
        cin >> num;
        if (num > 1)
        {
            primeFactors(num);
            break;
        }
        else
        {
            cout << "Please enter a positive integer greater than 1." << endl;
        }
        cout << "Press Any Key To Continue... ";
        getch();
        system("cls");
    }
}

void primeFactors(int num)
{
    cout << "Prime factorization of " << num << ": ";
    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num /= i;
        }
    }
    cout << endl;
}