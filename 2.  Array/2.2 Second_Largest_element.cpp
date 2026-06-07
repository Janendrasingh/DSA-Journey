#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(vector<int>& arr){
    int lg = arr[0], slg;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > lg){
        	slg = lg;
            lg = arr[i];
        }
    }

    return slg;
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

    cout<<"Second largest element in the Array is: "<< SecondLargestElement(arr);

    return 0;
}
