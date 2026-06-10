// insertion of the two sorted array #include <bits/stdc++.h>

// two pointer Approach 
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> a2 = {2, 3, 5, 6};

    int i = 0, j = 0;

    cout << "Intersection: ";

    while(i < a1.size() && j < a2.size()) {

        if(a1[i] < a2[j]) {
            i++;
        }
        else if(a1[i] > a2[j]) {
            j++;
        }
        else {
            cout << a1[i] << " ";
            i++;
            j++;
        }
    }

    return 0;
}
