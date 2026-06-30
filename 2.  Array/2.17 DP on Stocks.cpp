
//Best time to buy and sell stocks

#include<bits/stdc++.h>
using namespace std;

int stock(int ar[], int n){
	int profit=0;
	int mini=ar[0];
	for(int i=1; i<n; i++){
			int cost = ar[i]-mini;
			profit = max(profit, cost);
			mini = min(mini, ar[i]);	
	}
	return profit;
}

int main(){
	int n;
	cout<<"Enter the size of array --> ";
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	cout<<"profit will be "<< stock(ar, n)<<endl;
}
