#include <iostream>
#include <string>
using namespace std;

string repeatDigit(int digit, int times)
{
    string s = "";
    for (int i = 0; i < times; i++)
    {
        s += char(digit + '0');
    }
    return s;
}

string smallerString(int a, int b)
{
    string s1 = repeatDigit(a, b);
    string s2 = repeatDigit(b, a);

    if (s1 < s2)
        return s1;
    else
        return s2;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << smallerString(a, b);

    return 0;
}
