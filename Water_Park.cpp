#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h;
    cin >> w >> h;

    if (w >= 60 && h <= 130) // a weight of at most w kg and a height of at least h cm
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}