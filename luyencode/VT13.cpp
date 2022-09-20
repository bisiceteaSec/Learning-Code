#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, max, s1, s2, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    max = a[0] + a[1];
    
    for (int i = 1; i < n - 1; i++)
    {
        m = a[i] + a[i + 1];
        if (m >= max)
        {
            max = m;
            s1 = i;
            s2 = i + 1;
        }
    }
    if (a[n - 1] + a[0] > max)
        cout << a[n - 1] << " " << a[0];
    else
        cout << a[s1] << " " << a[s2];
}