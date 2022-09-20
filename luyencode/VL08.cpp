#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a, b;
    long S = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (i % 2 == 0)
            S += i;
    cout << S;
}