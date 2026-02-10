#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;

    int maxSum = arr[0];
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
            currSum = 0;
    }

    cout << "Maximum subarray sum = " << maxSum;
}

