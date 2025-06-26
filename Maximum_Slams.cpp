#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    if (x >= 25)
        cout << 0 << endl;
    else
    {
        int grand = 25 - x;
        int years = (grand + 3) / 4;
        cout << years << endl;
    }

    return 0;
}