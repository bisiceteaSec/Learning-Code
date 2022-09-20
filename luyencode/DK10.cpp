#include <bits/stdc++.h>
using namespace std;

int LeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int year, month;
    cin >> month >> year;
    if (year <= 0 || year > 100000)
    {
        cout << "INVALID";
        return 0;
    }
    if (month < 1 || month > 12)
    {
        cout << "INVALID";
        return 0;
    }
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31";
            break;
        case 2:
            if (LeapYear(year) == 1)
            {
                cout << "29";
                break;
            }
            else
            {
                cout << "28";
                break;
            }
        default:
            cout << "30";
    }
}