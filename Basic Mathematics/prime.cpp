#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool efficiantIsPrime(int n)
{

    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2))
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";

    if (efficiantIsPrime(n))
        cout << "Efficiant Yes" << "\n";
    else
        cout << "Efficiant No" << "\n";

    return 0;
}