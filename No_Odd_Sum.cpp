// I have counted ones and twos, if no of ones are even then operations will be the minimum of ones and twos but if the no of ones are odd then we will convert all twos to the ones hence operations will be no of twos, We have done this because we want either all ones or all twos because if there are different no on the different index then 1+2 can never given even number. while in case of all ones or all twos, each pair of index will give even numbers on addition.


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1)
            cnt1++;
        else
            cnt2++;
    }

    int ans = INT_MAX;

    // Option 1: Convert all 2s → 1s
    ans = cnt2;

    // Option 2: Convert all 1s → 2s (only possible if cnt1 is even)
    if (cnt1 % 2 == 0)
        ans = min(ans, cnt1 / 2);

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}