// Maximum consecutive number of 1's

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter 0 and 1 elements" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 0;
        }
    }

    cout << "Maximum consecutive number of 1's: " << maxCount;

    return 0;
}
