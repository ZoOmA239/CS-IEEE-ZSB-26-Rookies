#include <iostream>
using namespace std;

void Sum(long long n)
{
    cout << n << " ";
    if (n == 1)
        return;

    if (n % 2 == 0)
        Sum(n / 2);
    else
        Sum(3 * n + 1);
}

int main()
{
    long long n;
    cin >> n;
    Sum(n);
    return 0;
}
