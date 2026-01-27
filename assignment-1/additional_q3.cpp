#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    sort(A.begin(), A.end());

    int n = A.size();
    int sum = A[n-1] + A[n-2];

    cout << "Sum of remaining elements = " << sum;
    return 0;
}

