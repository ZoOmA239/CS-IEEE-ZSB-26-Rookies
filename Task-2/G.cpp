#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int freqS[26] = {0}, freqT[26] = {0};

        for (char c : s)
            freqS[c - 'a']++;

        for (char c : t)
            freqT[c - 'a']++;

        bool ok = true;
        for (int i = 0; i < 26; i++)
        {
            if (freqS[i] != freqT[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
