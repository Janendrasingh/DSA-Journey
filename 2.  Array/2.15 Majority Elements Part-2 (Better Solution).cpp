
// Majority Elements ( greater than > n/2 ) by Hashing 

#include <bits/stdc++.h>
using namespace std;

int majorElement(vector<int> v) {

    map<int, int> mpp;

    for (int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > v.size() / 2) {
            return it.first;
        }
    }

    return -1;
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v;

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = majorElement(v);

    if (ans != -1)
        cout << "Majority Element = " << ans;
    else
        cout << "No Majority Element";

    return 0;
}
