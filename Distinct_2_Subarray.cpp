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

        int min_length = INT_MAX;
        for (int start = 0; start < n; start++) // 0 1 2 3
        {
            for (int end = start; end < n; end++)
            {
                // 0 1 2 3
                // 1 2 3
                // 2 3
                // 3
                // 7 7 5 5
                // 7 5 5
                // 5 5
                // 5
                // set contains unique value and sorted
                set<int> dis_arr;
                for (int i = start; i <= end; i++)
                    dis_arr.insert(a[i]);

                if (dis_arr.size() == 2)
                    min_length = min(min_length, end - start + 1);
            }
        }
        if (min_length == INT_MAX)
            cout << -1 << endl;
        else
            cout << min_length << endl;
    }
    return 0;
}