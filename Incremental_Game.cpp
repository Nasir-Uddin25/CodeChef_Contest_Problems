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
        int x, y, k;
        cin >> x >> y >> k;

        if ((x - k) <= k && y <= k || (y - k) <= k && x <= k) // (4-10) <= 10 && 4 <= 10 || (4-10) <=10 && 4 <=10
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}