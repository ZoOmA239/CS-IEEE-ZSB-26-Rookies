#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s1, s2;
int target = 0, ways = 0, good = 0;

void rec(int i, int pos)
{
    if (i == s2.size())
    {
        ways++;
        if (pos == target)
            good++;
        return;
    }

    if (s2[i] == '+')
        rec(i + 1, pos + 1);
    else if (s2[i] == '-')
        rec(i + 1, pos - 1);
    else
    { // '?'
        rec(i + 1, pos + 1);
        rec(i + 1, pos - 1);
    }
}

int main()
{
    cin >> s1 >> s2;

    for (char c : s1)
        target += (c == '+') ? 1 : -1;

    rec(0, 0);

    double ans = (double)good / ways;
    printf("%.12f\n", ans);
}
