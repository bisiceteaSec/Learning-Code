#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    long n;
    cin >> n;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (pow(i, 2) == n)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}