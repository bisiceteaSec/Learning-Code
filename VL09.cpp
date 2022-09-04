#include <bits/stdc++.h>
using namespace std;

double Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n;
    float x;
    double S = 0;
    cin >> x >> n;

    for (int i = 1; i <= n; i++)
        S += pow(x, i) / Factorial(i);
    cout << setprecision(2) << fixed << S;
}