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
        string S, T;
        cin >> S >> T;

        int cnt_S = 0, cnt_T = 0;
        for (char c : S)
        {
            if (c == '1')
                cnt_S++;
        }
        for (char c : T)
        {
            if (c == '1')
                cnt_T++;
        }

        if (cnt_S < cnt_T || (cnt_S - cnt_T) % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }

        for (int i = 0; i < n; ++i)
        {
            if (T[i] == '1' && S[i] != '1')
            {
                cout << "No" << endl;
                continue;
            }
        }

        cout << "Yes" << endl;
    }
    return 0;
}