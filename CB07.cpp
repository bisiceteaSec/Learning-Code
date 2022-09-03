#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    float r;
    cin >> r;
    cout << setprecision(3) << fixed << 2 * 3.14 * r << endl;
    cout << setprecision(3) << fixed << 3.14 * pow(r, 2);
}