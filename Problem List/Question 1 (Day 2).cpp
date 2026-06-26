
//Write a program to check if a number is positive, negative, or zero

#include<bits/stdc++.h>
using namespace std;

void CheckNumber(int n){
	if(n>0) cout<<"Postive Number";
	else if(n<0) cout<<"Negative Number";
	else cout<<"Zero";	
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	CheckNumber(n);
}
