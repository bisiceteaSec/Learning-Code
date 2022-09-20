#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    int count = 0;
    for (unsigned int i = 0; i < s.size() - 1; i++)
        if (s[i] == ' ' & s[i + 1] != ' ')
            count++;

    if (s[0] == ' ')
        cout << count << endl;
    else
        cout << count + 1 << endl;
}