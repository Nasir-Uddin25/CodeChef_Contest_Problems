#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    if (sum >= 35) // 5 judge * 7 = 35
    {
        cout << 0 << endl;
        return;
    }
    
    sort(a.begin(), a.end());

    int coin = 0;
    int curr_sum = sum;

    for (int i = 0; i < 5; i++)
    {
        if (curr_sum >= 35)
            break;
        coin += 100;
        curr_sum += (10 - a[i]);
    }
    cout << coin << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}