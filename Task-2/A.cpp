#include <iostream>

using namespace std;

int main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool is_solved[26] = {false};

        int total_balloons = 0;

        for (char Character : s)
        {
            int index = Character - 'A';

            if (is_solved[index] == false)
            {
                total_balloons += 2;
                is_solved[index] = true;
            }
            else
            {
                total_balloons += 1;
            }
        }

        cout << total_balloons << "\n";
    }

    return 0;
}