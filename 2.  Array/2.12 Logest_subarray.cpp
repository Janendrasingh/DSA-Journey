// longest subarray with sum k

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    map<long long, int> prefixMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If sum itself equals k
        if (sum == k) {
            maxLen = i + 1;
        }

        // Check if (sum - k) exists
        if (prefixMap.find(sum - k) != prefixMap.end()) {
            int len = i - prefixMap[sum - k];
            maxLen = max(maxLen, len);
        }

        // Store first occurrence of prefix sum
        if (prefixMap.find(sum) == prefixMap.end()) {
            prefixMap[sum] = i;
        }
    }

    cout << "Length of longest subarray with sum " << k
         << " is: " << maxLen << endl;

    return 0;
}
