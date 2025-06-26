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
        int n, m, k; // n is row, m is column and Bod receives at least k
        cin >> n >> m >> k;

        int total = n * m; // Alice has total of rectangles
        int ans = 0;

        if(k == 0)
        {
            cout << total << endl;
            continue;
        }
        // Loop through 1 to  n and Alice can break into vertical cut
        for (int i = 1; i < n; i++)
        {
            int a = i * m;     // 4 8
            int b = total - a; // 8 4

            if (a >= k)
                ans = max(ans, b); // 8
            if (b >= k)
                ans = max(ans, a); // 8
        }

        for (int j = 1; j < m; j++)
        {
            int a = j * n; // 3 6 9

            int b = total - a; // 9 6 3
            if (a >= k)
                ans = max(ans, b); // 9

            if (b >= k)
                ans = max(ans, a); // 8
        }
        cout << ans << endl;
    }
    return 0;
}