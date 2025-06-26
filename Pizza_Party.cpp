#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int total_boys = a + 1;
    int total_slices = total_boys * 4 + b * 3;
    int pizza = (total_slices + 7) / 8;
    cout << pizza << endl;
    return 0;
}