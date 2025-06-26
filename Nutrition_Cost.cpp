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
        int n, c; // the number of food items and the value of a vitamin
        cin >> n >> c;

        vector<int> a(n); // vitamin ai
        vector<int> b(n); // costing bi
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int j = 0; j < n; j++)
            cin >> b[j];

        unique(a.begin(), a.end());
        for (auto val : a)
            cout << val << " ";
        cout << endl;

        // int x = 0;  //X: Count of unique vitamins in the selected subset.
        // for (int i = 0; i < n; i++)
        //     x++;

        // int y = 0;
        // for (int j = 0; j < n; j++)
        //     y += b[j]; // Y: Sum of costs of the selected food items.

        // int maximum = c * x - y;
        // if (maximum < 0)
        //     cout << 0 << endl;
        // else
        //     cout << maximum << endl;
    }
    return 0;
}