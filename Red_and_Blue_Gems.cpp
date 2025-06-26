#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b, p, q;
    cin >> r >> b >> p >> q;

    int red = r * p;
    int blue = b * q;

    int mx = max(red, blue);
    cout << mx << endl;
    return 0;
}