#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, count = 0;
    while(n != 0)
    {
        cin >> n;
        if (n < 0)
        {
            cout << n << " ";
            count++;
        }
    }
    if (count == 0)
        cout << "NOT FOUND";
}