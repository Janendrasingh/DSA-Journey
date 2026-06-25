// Find the number that appears once, and other numbers twice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans = ans ^ a[i];
    }

    cout << "The number that appears once is: " << ans;

    return 0;
}
