#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    ll n, count = 0;
    cin >> n;
    n = abs(n);
    for (ll i = 1; i <= n; i++)
        if (n % i == 0)
            count++;

    cout << count;
}