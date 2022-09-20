#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int year;
    cin >> year;
    if (year <= 0 || year > 100000)
        cout << "INVALID";
    else
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    cout << "YES";
                else
                    cout << "NO";
            }
            else
                cout << "YES";
        }
        else
            cout << "NO";
    }
}