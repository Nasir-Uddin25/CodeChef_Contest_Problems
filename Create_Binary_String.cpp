#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll maxCoins(int N, int A, int B, int C, int D) {
    ll max_profit = 0;

    for (int cnt0 = 0; cnt0 <= N; ++cnt0) {
        int cnt1 = N - cnt0;
        ll profit = 1LL * cnt0 * A + 1LL * cnt1 * B + 1LL * cnt0 * cnt1 * (C + D);
        max_profit = max(max_profit, profit);
    }

    return max_profit;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        cout << maxCoins(N, A, B, C, D) << endl;
    }

    return 0;
}
