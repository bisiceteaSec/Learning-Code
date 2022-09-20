#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, max, smax;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    max = arr[n - 1];
    smax = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < max && arr[i] > smax)
            smax = arr[i];
    if (max == smax)
        cout << "NOT FOUND";
    else
        cout << smax;
}