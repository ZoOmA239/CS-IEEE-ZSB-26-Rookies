#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;

        long long a = -1, b = -1, c = -1;

        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        if (a == -1)
        {
            cout << "NO\n";
            continue;
        }

        long long m = n / a;
        for (long long i = 2; i * i <= m; i++)
        {
            if (m % i == 0 && i != a)
            {
                b = i;
                break;
            }
        }
        if (b == -1)
        {
            cout << "NO\n";
            continue;
        }

        c = n / (a * b);
        if (c >= 2 && c != a && c != b)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
