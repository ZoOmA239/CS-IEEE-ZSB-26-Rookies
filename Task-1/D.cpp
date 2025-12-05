#include <iostream>

using namespace std;

int main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || c == a + b || b == a + c)
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