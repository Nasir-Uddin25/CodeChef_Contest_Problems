#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, n; // the number of aircraft , the number of passengers
        cin >> x >> n;

        int purchase_aircraft = n / 100; // 600/100=6, 523/100=5, 245/100=2
        // cout << purchase_aircraft << endl;
        if (purchase_aircraft > x && (n % 100 == 0)) // (6>4), (5>3),(2>8)
            cout << purchase_aircraft - x << endl;   // 2
        else if (purchase_aircraft > x && (n % 100 != 0))
            cout << (purchase_aircraft - x) + 1 << endl; // 3
        else
            cout << 0 << endl;
    }

    return 0;
}