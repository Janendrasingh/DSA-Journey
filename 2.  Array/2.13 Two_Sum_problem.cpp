// 2 sum problem

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k; 
	cout<<"Enter the size: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"Enter the target sum: ";
	cin>>k;
	for(int i=0; i<n; i++){
		for(int j=1; j<n; j++){
			if(a[i]==a[j])
				continue;
			if(a[i]+a[j]==k)
				cout<<"Posible element will be "<<a[i]<<" and "<<a[j]<<endl;
			//	break;
		}
	}
	
}
