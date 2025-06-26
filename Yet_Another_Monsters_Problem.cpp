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

        sort(a.begin(), a.end());

        int min_time = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int time = a[i] + (n - i - 1);  // 
            if (time < min_time)
                min_time = time;
        }
        cout << min_time << endl;
    }
    return 0;
}