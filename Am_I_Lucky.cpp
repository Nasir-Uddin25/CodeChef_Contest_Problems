#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, Boys, k, Girls;
        cin >> n >> Boys >> k;

        Girls = n - Boys; // 12-4=8, 15-10=5,8-8=0
        // cout << Girls << endl;
        ll Remain_B = Boys % k; // 4%3=1, 10%2=0, 8%3=2
        // cout << Remain_B << endl;
        ll Remain_G = Girls % k; // 8%3=2, 5%5=0, 0%3=0
        // cout << Remain_G << endl;

        ll Read = abs(Remain_B - Remain_G); 
        cout << Read << endl;
    }
    return 0;
}