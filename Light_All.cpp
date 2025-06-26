#include <bits/stdc++.h>
using namespace std;

bool light_all(int n, string s)
{
    vector<bool> light(n + 2, false);

    for (int i = 1; i <= n; ++i)
    {
        if (s[i - 1] == '1')
        {
            light[i] = true;

            if (i > 1 && !light[i - 1])
            {

                light[i - 1] = true;
            }
            else if (i < n && !light[i + 1])
            {

                light[i + 1] = true;
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!light[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (light_all(n, s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}