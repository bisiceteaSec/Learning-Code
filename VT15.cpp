#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int f = a[0] * a[1] * a[n - 1];
    int l = a[n - 1] * a[n - 2] * a[n - 3];

    cout << max(f, l);
}