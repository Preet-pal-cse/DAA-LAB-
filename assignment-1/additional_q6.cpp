#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> points = {
        {9,3}, {2,6}, {15,3}, {5,1},
        {1,2}, {12,4}, {7,2}, {4,7},
        {16,5}, {3,3}, {10,5}, {6,4},
        {14,6}, {8,6}, {11,1}, {13,2}
    };

    double minDist = DBL_MAX;
    pair<pair<int,int>, pair<int,int>> closestPair;

    int n = points.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double d = sqrt(
                pow(points[i].first - points[j].first, 2) +
                pow(points[i].second - points[j].second, 2)
            );

            if (d < minDist) {
                minDist = d;
                closestPair = {points[i], points[j]};
            }
        }
    }

    cout << "Closest Pair: (" 
         << closestPair.first.first << "," << closestPair.first.second << ") and ("
         << closestPair.second.first << "," << closestPair.second.second << ")\n";

    cout << "Minimum Distance = " << minDist;

    return 0;
}

