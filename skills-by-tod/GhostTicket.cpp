#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n,k,data;
	cin >>n>>k;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>data;
		arr[i]=data;
		
	}
	int size = sizeof(arr)/sizeof(arr[0]); 
	int tmp=0;
	while (k>0){
		int i=0;
		
		sort(arr, arr+size, greater<int>()); 
		//cout<<arr[i];
		tmp+=arr[i];
		arr[i]-=1;
		i+=1;
		k-=1;
	}
	cout<<tmp;
	
	
}
