
//Write a program to find the largest of three number

#include<bits/stdc++.h>
using namespace std;

void largestNumber(int i, int j, int k){
	if((i>j) && (j>k)) cout<<"Largest number is "<<i;
	else if((j>i) && (i>k))cout<<"Largest number is "<<j;
	else cout<<"Largest number is "<<k;
	
}

int main(){
	int i, j ,k;
	cout<<"Enter the number: ";
	cin>>i>>j>>k;
	largestNumber(i, j ,k);
}
