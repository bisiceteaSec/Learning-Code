#include <bits/stdc++.h>
using namespace std;

double Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

double C(int n, int k)
{
    return (Factorial(n) / (Factorial(k) * Factorial(n - k)));
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    long long k, n;
    cin >> n >> k;
    cout << C(n, k);
}