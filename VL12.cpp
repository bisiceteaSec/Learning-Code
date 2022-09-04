#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    ll n;
    cin >> n;
    if (n < 0)
        n = abs(n);
    if (n == 0)
    {
        cout << "INF";
        return 0;
    }
    for (ll i = n; i >= 1; i--)
        if (n % i == 0)
            cout << i << " ";
}