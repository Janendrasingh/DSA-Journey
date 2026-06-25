#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int n, int arr[]) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
	
	Bubble_Sort(n, arr);
	
	cout<<"After Sorting:  [";
	for(int i=0; i<n; i++){
		cout<<"\""<<arr[i]<<"\" ";
	}
	
	cout<<"]";
}
