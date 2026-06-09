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

    int j = 0; // position for next non-zero

    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    cout << "After moving zeros to the end: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
