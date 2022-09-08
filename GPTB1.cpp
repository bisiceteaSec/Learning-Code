#include <bits/stdc++.h>
using namespace std;

int main() // Way1
{
	double a1, b1, c1, a2, b2, c2;
    double D, Dx, Dy, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0)
    {
        if (Dx == 0 && Dy == 0)
            cout << "VOSONGHIEM";
        else
        {
            if (Dy =! 0)
                cout << "VONGHIEM";
            else
                if (Dx != 0)
                    cout << "VONGHIEM";
        }
    }
    else
    {
        x = (double) Dx / D;
        y = (double) Dy / D;
        if (x == -0.0 )
            x = fabs(x);
		if (y == -0.0 )
            y = fabs(y);
        cout << setprecision(2) << fixed << x << " " << y;
    }
    return 0;
}
// Custom way
// {
//     ios::sync_with_stdio(0);
//     cout.tie(0);
//     cin.tie(0);

//     double a1, b1, c1, a2, b2, c2, x, y, t;
//     cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
//     t = a1 / a2;
//     a2 = a2 * t;
//     b2 = b2 * t;
//     c2 = c2 * t;

//     cout << "\n" << a1 << " " << b1 << " " << c1 << "\n" << a2 << " " << b2 << " " << c2 << "\n";

//     if (b1 / b2 != c1 / c2 && ((b1 == b2) || c1 == c2) && c1 - c2 != 0)
//     {
//         cout << "VONGHIEM";
//         return 0;
//     }
//     if (b1 / b2 == c1 / c2)
//     {
//         cout << "VOSONGHIEM";
//         return 0;
//     }
    
//     y = (c1  - c2) / (b1 - b2);
//     x = (c1 - (b1 * y)) / a1;
//     cout << setprecision(2) << fixed << x << " " << y;
// }