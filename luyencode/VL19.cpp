#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a, b, count = 0;
    cin >> a >> b;
    for (int i = b - 1; i > a; i--)
        if (i % 3 == 0)
        {
            cout << i << " ";
            count++;
        }
    if (count == 0)
        cout << "NOT FOUND";
    return 0;
}