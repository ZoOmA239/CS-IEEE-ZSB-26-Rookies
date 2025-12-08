#include <iostream>

using namespace std;

int main()
{

    int Words;
    cin >> Words;

    while (Words--)
    {
        string s;
        cin >> s;

        int length = s.size();

        if (length > 10)
        {
            int middle = length - 2;

            string abbreviation = s[0] + to_string(middle) + s[length - 1];
            cout << abbreviation << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }

    return 0;
}