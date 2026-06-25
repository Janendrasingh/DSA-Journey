#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int n, int arr[]) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
	
	Insertion_Sort(n, arr);
	
	cout<<"After Sorting:  [";
	for(int i=0; i<n; i++){
		cout<<"\""<<arr[i]<<"\" ";
	}
	
	cout<<"]";
}
