//----------- 1st Approach --------//

/* #include <bits/stdc++.h>
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

        int red = 0, blue = 0; // Initialize counts for red and blue
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                red++;
            if (a[i] == 2)
                blue++;
        }

        cout << red << " " << blue << endl;

        if (n % 2 != 0) // 1st -> 3%2 =1, 4%2=0,6%2 =0
            cout << "No" << endl;
        else
        {
            if (red > n / 2 || blue > n / 2) // 1 > 3/2 || 1>3/2,  1 > 4/2 || 2 > 4/4, 1 >4/2 || 0 > 4/4, 4 > 6/2 || 1> 6/2
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
} */

// ------------ 2nd Approach -----------//
/* #include <bits/stdc++.h>
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

        int red_color = 0, blue_color = 0;
        for (int i = 0; i < n; i++)
        {
            int color;
            cin >> color;

            if (color == 1)
                red_color++;
            if (color == 2)
                blue_color++;
        }

        if (n % 2 != 0)
            cout << "No" << endl;
        else
        {
            int target = n / 2;
            if (red_color <= target && blue_color <= target)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
} */

// ---------------- 3rd Approach ---------------------//
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

        int zero = 0, red = 0, blue = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                red++;
            else if (a[i] == 2)
                blue++;
            else
                zero++;
        }

        int res = abs(red - blue);
        // cout << res << endl;
        if (zero >= res) // 0 >= 0, 0 >= 1, 000>=1, 0>=3
            zero = zero - res;
        // cout << zero << endl;
        if (zero % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}