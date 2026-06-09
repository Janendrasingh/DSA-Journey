// Left rotate the array by K place

#include<bits/stdc++.h>
using namespace std;

// Brute Force Apporch
void LeftRotate(int arr[], int n, int d){
	d=d%n;
	
	int temp[d];
	for(int i=0; i<d; i++){
		temp[i]=arr[i];
	}
	
	for(int i=d; i<n; i++){
		arr[i-d] = arr[i];
	}
	
	for(int i=n-d; i<n; i++){
		arr[i]=temp[i-(n-d)];
	}
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int d;
	cout<<"Enter the K postion: ";
	cin>>d;
	LeftRotate(arr, n, d);
	cout<<"After left Rotaion";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}
