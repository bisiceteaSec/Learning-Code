#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a1, b1, c1, a2, b2, c2;
    double D, Dx, Dy, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;

    if (D == 0)
    {
        if (Dx + Dy == 0)
            cout << "VOSONGHIEM";
        else
            cout << "VONGHIEM";
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        cout << setprecision(2) << fixed << x << " " << y;
    }
}