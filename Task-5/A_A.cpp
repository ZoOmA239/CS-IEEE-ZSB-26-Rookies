#include <bits/stdc++.h>
using namespace std;

int countDivisors(int x)
{
    int cnt = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt++;
            if (i != x / i)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        cout << countDivisors(x) << endl;
    }
}
