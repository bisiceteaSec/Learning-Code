#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    ll n, S = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
        S += pow(i, 2);
    cout << S;
}