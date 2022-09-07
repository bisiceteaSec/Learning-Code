#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == 0)
            return 0;
        if ((int)s[i] < 0)
            cout << s[i] << " ";
    }
}