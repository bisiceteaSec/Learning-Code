#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    long a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "INF";
            else
                cout << "NO";
        }
        else
            cout << setprecision(2) << fixed << (double) -c / b;
    }
    else
    {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
            cout << "NO";
        else
        {
            if (delta == 0)
                cout << setprecision(2) << fixed << (double) -b / (2 * a);
            else
            {
                cout << setprecision(2) << fixed << (double) (-b - sqrt(delta)) / (2 * a) << " ";
                cout << setprecision(2) << fixed << (double) (-b + sqrt(delta)) / (2 * a);
            }
        }
    }
}