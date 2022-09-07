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
    
    for (int j = 1; j < n; j += 2)
    {
        if (j + 1 == n)
            a[j] = a[j] += abs(a[j - 1] - 0);
        else
            a[j] += abs(a[j - 1] - a [j + 1]);
    }
    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
}