// Find Missing number in a array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    // Expected sum of numbers from 1 to n+1
    int expectedSum = (n + 1) * (n + 2) / 2;

    int missing = expectedSum - sum;

    cout << "\nMissing number is: " << missing;

    return 0;
}
