#include <bits/stdc++.h>
using namespace std;

int solve(int x)
{
    while (1)
    {
        if (x > 3 && x % 2 != 0)
            x -= 3;
        else if (x % 2 == 0)
            x /= 2;
        else
            break;
    }
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
    return 0;
}