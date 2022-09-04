#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string a;
    int count = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] == '-')
            continue;
        else
            count += 1;
    }
    cout << count;
}