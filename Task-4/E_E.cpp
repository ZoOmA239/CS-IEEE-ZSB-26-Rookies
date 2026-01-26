#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> ans;
bool used[10];

void rec(string cur)
{
    if (cur.size() == s.size())
    {
        ans.push_back(cur);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (used[i])
            continue;

        if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
            continue;

        used[i] = true;
        rec(cur + s[i]);
        used[i] = false;
    }
}

int main()
{
    cin >> s;
    sort(s.begin(), s.end());

    rec("");

    cout << ans.size() << "\n";
    for (auto &x : ans)
        cout << x << "\n";
}
