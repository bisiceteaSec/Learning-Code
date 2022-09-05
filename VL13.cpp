#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    ll n, S = 0;
    cin >> n;
    if (n < 3)
    {
        cout << "NO";
        return 0;
    }
    for (ll i = 1; i < n; i++)
        if (n % i == 0)
            S += i;
    if (S == n)
        cout << "YES";
    else
        cout << "NO";
}