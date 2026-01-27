#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1, 5, 6, 10, 12, 13};
    sort(A.begin(), A.end());

    int i = 0, ans = 0;
    for (int j = 0; j < A.size(); j++) {
        while (A[j] - A[i] > 10) i++;
        ans = max(ans, j - i + 1);
    }

    cout << "Maximum length of good subsequence = " << ans;
    return 0;
}

