// 2 sum problem

#include<bits/stdc++.h>
using namespace std;

/*
// BETTER Solution (Hashing)

pair<int, int> Two_Sum_Problem(int n, vector<int> &book, int target){
    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        int a = book[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }

        mpp[a] = i;
    }

    return {-1, -1};
}
*/

// OPTIMAL Solution (Two Pointer)

string Two_Sum_Problem(int n, vector<int> &a, int target){
    sort(a.begin(), a.end());

    int left = 0;
    int right = n - 1;

    while(left < right){
        int sum = a[left] + a[right];

        if(sum == target){
            return "YES";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }

    return "NO";
}

int main(){
    int n, k;

    cout<<"Enter the size: ";
    cin>>n;

    vector<int> a(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Enter the target sum: ";
    cin>>k;

    // BRUTE Force solution

//  for(int i=0; i<n; i++){
//      for(int j=i+1; j<n; j++){
//          if(a[i]+a[j]==k)
//              cout<<"Possible element will be "<<a[i]<<" and "<<a[j]<<endl;
//  }

    string ans = Two_Sum_Problem(n, a, k);

    cout << ans;
}
