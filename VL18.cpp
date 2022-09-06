#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string s;
    cin >> s;
    stack<char> st;
    for (char x : s)
        st.push(x);
    while (!st.empty())
    {
        if (st.top() == '0')
            st.pop();
        else
            break;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}