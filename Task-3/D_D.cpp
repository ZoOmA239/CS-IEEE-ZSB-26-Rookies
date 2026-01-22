#include <iostream>
using namespace std;

int countDigits(long long N, int K)
{
    int cnt = 0;
    while (N > 0)
    {
        N /= K;
        cnt++;
    }
    return cnt;
}

int main()
{
    long long N;
    int K;
    cin >> N >> K;

    cout << countDigits(N, K);
    return 0;
}
