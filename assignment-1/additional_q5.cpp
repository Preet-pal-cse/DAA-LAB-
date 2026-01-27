#include <bits/stdc++.h>
using namespace std;

bool canFit(long long S, long long N, long long H, long long W) {
    long long perRow = S / W;
    if (perRow == 0) return false;

    long long rows = (N + perRow - 1) / perRow;
    return rows * H <= S;
}

int main() {
    long long N = 6, H = 2, W = 3;

    long long low = max(H, W), high = 1e18, ans = high;
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canFit(mid, N, H, W)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    cout << "Minimum square side = " << ans;
    return 0;
}

