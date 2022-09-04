#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    long S = 1;

    for (int i = 2; i <= n; i++)
        S *= i;
    cout << S;
}