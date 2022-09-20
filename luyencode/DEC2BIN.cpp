#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll T, number;
    cin >> T;
    while (T != 0)
    {
        cin >> number;
        ll n = (int)(log2(number));
        cout << bitset<64>(number).to_string().substr(64 - n - 1) << endl;
        T--;
    }
}