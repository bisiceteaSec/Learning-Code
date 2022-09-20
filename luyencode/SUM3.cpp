#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    ll n;
    double S = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++)
        S += (double) 1 / (i * (i + 1));
    cout << setprecision(5) << fixed << S;
}