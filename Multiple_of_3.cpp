#include <bits/stdc++.h>
using namespace std;

int multiple(int n)
{
    int res = n / 3;

    int low = res * 3;
    int up = (res + 1) * 3;

    if (abs(n - low) <= abs(n - up))
        return low;
    else
        return up;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int near = multiple(n);
    cout << near << endl;
    return 0;
}
