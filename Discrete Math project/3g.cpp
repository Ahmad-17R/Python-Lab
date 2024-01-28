#include <iostream>
using namespace std;
int extendedGCD(int e, int m, int &s, int &t);
int Decrypted(int e, int m);
bool arePrime(int e, int b);
main()
{
    int p, q, n, e;
    cout << "Enter prime number p: ";
    cin >> p;
    cout << "Enter prime number q: ";
    cin >> q;
    n = p * q;
    do
    {
        cout << "Enter the public exponent (e): ";
        cin >> e;
    } while (!arePrime(e, (p - 1) * (q - 1)));
    int d = Decrypted(e, (p - 1) * (q - 1));
    cout << "Decryption key (d): " << d << endl;
}
int Decrypted(int e, int m)
{
    int s, t;
    int gcdResult = extendedGCD(e, m, s, t);
    if (gcdResult == 1)
    {
        return ((s % m) + m) % m;
    }
    else
    {
        cout << "Inverse does not exist as " << e << " and " << m << " are not relatively prime with gcd not equal to 1." << endl;
        return -1;
    }
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
int extendedGCD(int e, int m, int &s, int &t)
{
    if (e == 0)
    {
        s = 0;
        t = 1;
        return m;
    }
    int s1, t1;
    int gcd = extendedGCD(m % e, e, s1, t1);
    s = t1 - (m / e) * s1;
    t = s1;
    return gcd;
}