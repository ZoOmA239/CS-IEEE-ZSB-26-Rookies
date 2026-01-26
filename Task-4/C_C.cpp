#include <iostream>
#include <cmath>
using namespace std;

int n;
long long a[25], total = 0, ans = 1e18;

void rec(int i, long long s)
{
    if (i == n)
    {
        ans = min(ans, llabs(s - (total - s)));
        return;
    }

    rec(i + 1, s + a[i]);
    rec(i + 1, s);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    rec(0, 0);
    cout << ans;
}
