#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return (a / __gcd(abs(a), abs(b))) * b;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;
    cout << abs(lcm(a, b));
}