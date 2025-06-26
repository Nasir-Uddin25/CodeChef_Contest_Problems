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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long sum = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mx)
                mx = a[i];
        }

        while (q--)
        {
            int i, x;
            cin >> i >> x;


            sum -= a[i];
            sum += x;

            if (a[i] == mx)
            {

                if (x >= mx)
                {
                    mx = x;
                }
                else
                {
                    mx = *max_element(a.begin(), a.end());
                }
            }
            else
            {
                if (x >= mx)
                {
                    mx = x;
                }
            }

            a[i] = x;

            cout << abs(sum - mx) << endl;
        }
    }
    return 0;
}

