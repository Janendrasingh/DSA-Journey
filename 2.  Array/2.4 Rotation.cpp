// Left Rotate the array by one place

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int temp = a[0];

    for(int i = 1; i < n; i++) {
        a[i - 1] = a[i];
    }

    a[n - 1] = temp;

    cout << "After rotation: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
