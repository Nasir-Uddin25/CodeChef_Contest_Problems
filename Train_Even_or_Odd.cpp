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

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even += a[i];
            else
                odd += a[i];

            // if (even == odd)
            //     even += 1;
        }

        int mx = max(even, odd);
        cout << mx << endl;
    }
    return 0;
}