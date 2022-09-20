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
    for (ll i = 1; i <= n; i++)
    {
        S += i;
        if (S > n)
        {
            cout << i - 1;
            return 0;
        }
    }
}