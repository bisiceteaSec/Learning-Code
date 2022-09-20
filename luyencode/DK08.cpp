#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    float a, b;
    char cal;
    cin >> a >> cal >> b;
    if (cal == '+')
        cout << setprecision(2) << fixed << a + b;
    if (cal == '-')
        cout << setprecision(2) << fixed <<  a - b;
    if (cal == '*')
        cout << setprecision(2) << fixed <<  a * b;
    if (cal == '/')
    {
        if (b == 0)
            cout << "Math Error";
        else
            cout << setprecision(2) << fixed <<  a / b;
    }
}