#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a[11], f, flag = 0;
    for (int i = 0; i < 11; i++)
        cin >> a[i];
    
    for (int i = 0; i < 10; i++)
        if (a[i] == a[10])
        {
            cout << i + 1 << " ";
            flag = 1;
        }
    if (flag == 0)
        cout << -1;
}