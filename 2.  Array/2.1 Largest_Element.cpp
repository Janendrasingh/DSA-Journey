#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int>& arr){
    int lg = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > lg){
            lg = arr[i];
        }
    }

    return lg;
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter the elements"<<endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<"Largest Element in the array is: "<< LargestElement(arr);

    return 0;
}
