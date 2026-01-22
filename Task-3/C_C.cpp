#include <iostream>
#include <iomanip>
using namespace std;

double atm(int X, double Y)
{
    if ((X % 5 == 0) && (Y >= X + 0.50))
        return Y - X - 0.50;
    else
        return Y;
}

int main()
{
    int X;
    double Y;

    cin >> X >> Y;

    cout << fixed << setprecision(2) << atm(X, Y);

    return 0;
}
