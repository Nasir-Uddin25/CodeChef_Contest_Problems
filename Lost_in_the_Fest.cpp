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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int BhoomiHeight = a[n - 1];

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= BhoomiHeight)
            {
                idx = i;
                break;
            }
                
        }

        cout << n - idx -1 << endl;
    }
    return 0;
}