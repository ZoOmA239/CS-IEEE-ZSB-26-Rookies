#include <iostream>

using namespace std;

int main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}