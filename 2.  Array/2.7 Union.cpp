// Union of two sorted array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cout<<"Enter the size of 1st Array: ";
	cin>>n;
	cout<<"Enter the size of 2nd Array: ";
	cin>>m;
	vector<int> a1(n);
	vector<int> a2(m);
	
	cout<<"Enter the elements of 1st Array"<<endl;
	for(int i=0; i<n; i++){
		cin>>a1[i];
	}
	
	cout<<"Enter the elements of 2nd Array"<<endl;
	for(int i=0; i<m; i++){
		cin>>a2[i];
	}
	
	cout<<"Union of these two Array are: ";
}
