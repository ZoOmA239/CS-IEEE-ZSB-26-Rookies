#include <iostream>

using namespace std;

int main()
{
    int price, special_coin;
    cin >> price >> special_coin;

        for (int x = 1; x <= 10; x++)
    {
        int total = price * x;

        int last_digit = total % 10;

        if (last_digit == 0 || last_digit == special_coin)
        {
            cout << x << endl;
            return 0;
        }
    }

    return 0;
}