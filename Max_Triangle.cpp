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
        int n;
        cin >> n;

        if (n <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << 3 * (n - 1) << endl;
        }
        }

    return 0;
}