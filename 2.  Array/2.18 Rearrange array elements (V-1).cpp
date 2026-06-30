
//Rearrange Array Elements by signs (1st varietie)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array (even): ";
    cin >> n;

    int ar[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    // ---------------- Brute Force ----------------

    vector<int> pos, neg;

    // Store positive and negative numbers separately
    for (int i = 0; i < n; i++) {
        if (ar[i] >= 0)
            pos.push_back(ar[i]);
        else
            neg.push_back(ar[i]);
    }

    int ans[n];
    int p = 0, q = 0;

    // Fill the answer array alternately
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            ans[i] = pos[p++];
        else
            ans[i] = neg[q++];
    }

    cout << "\nRearranged Array:\n";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
