#include <bits/stdc++.h>
using namespace std;

vector<int> restore(int n, int k, vector<int> r)
{
    vector<int> y = r;

    for (int i = 2; i <= 2 * n && k > 0; i += 2)
    {
        if (r[i] - 1 > r[i - 1] && r[i] - 1 > r[i + 1])
        {
            y[i]--;
            k--;
        }
    }

    return y;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> r(2 * n + 2);
    for (int i = 1; i <= 2 * n + 1; i++)
        cin >> r[i];

    vector<int> y = restore(n, k, r);

    for (int i = 1; i <= 2 * n + 1; i++)
        cout << y[i] << " ";
}
