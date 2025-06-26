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

        vector<char> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int boys = 0, girls = 0;

        bool enter = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'B')
                boys++;
            else if (v[i] == 'G')
                girls++;

            if (boys > 2 * girls)
            {
                cout << i + 1 << endl;
                enter = true;
                break;
            }
        }

        if (!enter)
            cout << n << endl;
    }
    return 0;
}