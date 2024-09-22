#include <bits/stdc++.h>
using namespace std;

int countDigits(long num)
{
    if (num == 0)
        return 1;
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    long num = 123456789;
    cout << "No. of digits : " << countDigits(num) << "\n";

    return 0;
}