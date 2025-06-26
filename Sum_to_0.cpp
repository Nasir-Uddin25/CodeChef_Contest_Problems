#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> a(n);

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                a[i] = 1;
                a[i + 1] = -1;
            }
        }
        else
        {
            a[0] = 2;
            a[1] = -1;
            a[2] = -1;
            for (int i = 3; i < n; i += 2)
            {
                a[i] = 1;
                if (i + 1 < n)
                {
                    a[i + 1] = -1;
                }
            }
        }

        for (int num : a)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}