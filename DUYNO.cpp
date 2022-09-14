#include <bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string s;
    while (cin >> s)
    {
        if (s[0] == s[s.length() - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}