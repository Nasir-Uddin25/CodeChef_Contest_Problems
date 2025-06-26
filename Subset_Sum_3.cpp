//i have three count counter here named cnt0, cnt1, cnt2; i count how many elements of vector A is divisible by 3, give remainder as 1 or 2; then i am outputting yes if(any one number is divisible by 3, or cnt1 and cnt2 is >0 , or if(any of them is >=3) as 1+1+1%3=0 2+2+2%3=0 if not i am outputting no
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (auto num : a)
        {
            int modulus = num % 3;
            if (modulus == 0)
                cnt0++;
            else if (modulus == 1)
                cnt1++;
            else
                cnt2++;
        }

        bool ok = false;
        if (cnt0 > 0)
            ok = true;
        else
        {
            if (cnt1 >= 1 && cnt2 >= 1)
                ok = true;
            else if (cnt1 >= 3)
                ok = true;
            else if (cnt2 >= 3)
                ok = true;
        }

        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        // cout << cnt0 << " " << cnt1 << " " << cnt2 << endl;
    }
    return 0;
}