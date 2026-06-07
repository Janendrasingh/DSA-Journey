#include<bits/stdc++.h>
using namespace std;

void Bubble_sorting(int n, int arr[]){
	
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
	
	Bubble_sorting(n, arr);
	
	cout<<"After Sorting:  [";
	for(int i=0; i<n; i++){
		cout<<"\""<<arr[i]<<"\" ";
	}
	
	cout<<"]";
}
