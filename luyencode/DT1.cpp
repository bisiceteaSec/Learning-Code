#include <bits/stdc++.h>
using namespace std;

const double pi = 3.141592653589793238462643;

double circle(int r)
{
    return pi * r * r;
}

int triangleSquare(int a)
{
    return ((a * a) / 2);
}

double oneCornerCircle(int r)
{
    return circle(r) / 4;
}

double solve(int n)
{
    return (2 * triangleSquare(n)) + ((oneCornerCircle(n) - triangleSquare(n)) * 2);
}

int main()
{
    int a;
    cin >> a;
    cout << setprecision(3) << fixed << solve(a);
}