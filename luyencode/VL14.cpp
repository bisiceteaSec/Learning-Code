#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    if (a < 0)
        a = abs(a);
    if (b < 0)
        b = abs(b);
    cout << __gcd(a, b);
}