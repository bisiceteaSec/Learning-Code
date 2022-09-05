#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b)
{
    int d = __gcd(abs(a), abs(b));
    int t = a / d;
    int m = b / d;
    if (t < 0 && m < 0)
    {
        t = abs(t);
        m = abs(m);
    }
    else
        if (m < 0 && t > 0)
        {
            t = -t;
            m = abs(m);
        }

    if (m == 1)
        cout << t;
    else
        cout << t << " " << m;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    if(b == 0)
    {
        cout << "INVALID";
        return 0;
    }
    solve(a, b);
}