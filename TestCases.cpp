#include<bits/stdc++.h>
using namespace std;

void selection_sorting(int n, int arr[]){
	for(int i=0; i<n-1; i++){
		int minItem=i;
			for(int j=i+1; j<n; j++){
				if(arr[j]<arr[minItem]){
					minItem = j;
				}
			}
			swap(arr[i], arr[minItem]);
	}
}

int main(){
	int n;
	cout<<"Enter the Size of array: ";
	cin>>n;
	int arr[n];
	
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Before Sorting: [";
	for(int i=0; i<n; i++){
		cout<<"\""<<arr[i]<<"\" ";
	}
	cout<<"]"<<endl;
	
	cout<<"After Sorting:  [";
	selection_sorting(n, arr);
	for(int i=0; i<n; i++){
		cout<<"\""<<arr[i]<<"\" ";
	}
	
	cout<<"]";
}
