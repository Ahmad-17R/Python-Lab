#include <iostream>
#include <cmath>
using namespace std;
bool arePrime(int e, int b);
int Encrypted(int message, int e, int n);
main()
{
    int p, q, n, e, message;
    cout << "Enter the first prime number (p): ";
    cin >> p;
    cout << "Enter the second prime number (q): ";
    cin >> q;
    n = p * q;
    do
    {
        cout << "Enter the public exponent (e): ";
        cin >> e;
    } while (!arePrime(e, (p - 1) * (q - 1)));
    cout << "Enter the message to be encrypted: ";
    cin >> message;
    int encryptedMessage = Encrypted(message, e, n);
    cout << "Encrypted message: " << encryptedMessage << endl;
}
bool arePrime(int e, int b)
{
    for (int i = 2; i <= min(e, b); ++i)
    {
        if (e % i == 0 && b % i == 0)
        {
            return false;
        }
    }
    return true;
}
int Encrypted(int message, int e, int n)
{
    int result = 1;
    message = message % n;
    while (e > 0)
    {
        if (e % 2 == 1)
        {
            result = (result * message) % n;
        }
        e = e >> 1;
        message = (message * message) % n;
    }
    return result;
}
