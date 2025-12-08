#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int common;
        if (a[0] == a[1])
            common = a[0];
        else
            common = a[2];

        for (int i = 0; i < n; i++)
        {
            if (a[i] != common)
            {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}
