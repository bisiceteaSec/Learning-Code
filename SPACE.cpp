#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        int count = 0;
        for (unsigned int i = 0; i < s.length(); i++)
            if (s[i] == ' ' & (s[i] != s[i + 1]))
                count++;
        cout << count << endl;
    }

}