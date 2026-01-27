#include <bits/stdc++.h>
using namespace std;

bool isSpecial(vector<int>& A, int k, int idx) {
    vector<int> B;
    for (int x : A)
        B.push_back(x > A[idx] ? 1 : 0);

    unordered_map<int, int> mp;
    int prefix = 0;
    mp[0] = 1;

    for (int x : B) {
        prefix += x;
        if (mp.count(prefix - k)) return true;
        mp[prefix]++;
    }
    return false;
}

int main() {
    vector<int> A = {3, 1, 4, 2, 5};
    int k = 2;
    int specialty = 0;

    for (int i = 0; i < A.size(); i++) {
        if (isSpecial(A, k, i))
            specialty += A[i];
    }

    cout << "Specialty of sequence = " << specialty;
    return 0;
}

