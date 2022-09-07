#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    char a, b;
    cin >> a >> b;
    a = toupper(a);
    b = toupper(b);

    if (a == b)
        cout << a;
    else
        for (char x = a; x <= b; x++)
            cout << x << " ";
}