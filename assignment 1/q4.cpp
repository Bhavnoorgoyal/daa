#include <iostream>
using namespace std;
int main() {
    int a[] ={-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;
    int currSum = a[0];
    int maxSum  = a[0];
    for (int i = 1; i < n; i++) {
        currSum = max(a[i], currSum + a[i]);
        maxSum = max(maxSum, currSum);
    }
    cout << "max subarray sum = " << maxSum;
    return 0;
}
