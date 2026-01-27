#include <bits/stdc++.h>
using namespace std;

bool canDivide(vector<int>& A, int M, int maxOR) {
    int segments = 1;
    int currOR = 0;

    for (int x : A) {
        if ((currOR | x) <= maxOR) {
            currOR |= x;
        } else {
            segments++;
            currOR = x;
            if (segments > M) return false;
        }
    }
    return true;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    int M = 2;

    int low = *max_element(A.begin(), A.end());
    int high = 0;
    for (int x : A) high |= x;

    int ans = high;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canDivide(A, M, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Minimum possible maximum OR = " << ans;
    return 0;
}

