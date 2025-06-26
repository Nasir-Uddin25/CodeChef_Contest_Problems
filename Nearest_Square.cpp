#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int b = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        int a = i * i;
        if (a <= n)
        {
            b = a; 
        }
    }
    cout << b << endl; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}