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

        int mn = INT_MAX;
        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a >= 7)
            {
                if (b < mn)
                    mn = b;
                ok = true;
            }
        }
        if (ok)
            cout << mn << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}