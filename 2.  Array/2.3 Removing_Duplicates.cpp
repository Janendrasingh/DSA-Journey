#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int i = 0;

    for(int j = 1; j < arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k = removeDuplicates(arr);

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
