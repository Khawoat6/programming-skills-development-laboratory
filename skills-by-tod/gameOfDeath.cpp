#include <iostream>
#include <stdio.h>
using namespace std;
int algo(int n,int t){
	if(n==1)
		return 1;
	else{
		return (algo(n-1,t)+t-1)%n+1;
	}
}
int main(){
	int n,t;
	int tmp=0;
	cin >>n>>t;
	cout<<algo(n,t);
	/*
	int arr[n];
	for (int i=1;i<=n;i++){
		arr[i]=i;
	}
	int j=0;
	int count=1;
	int tmp2=1;
	int tmp3=n;
	while(1){
		if(tmp2>n){
			tmp2-=n;
		}
		
		if(count-t==0){
			arr[tmp2]=0;
			arr[tmp2]=arr[tmp2+1];
			count=0;
			tmp3-=1;
		}
		if(tmp3 ==1){
			break;
		}
		
		
		
		count+=1;
		tmp2+=1;
		
				
	}
	for (int i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
	*/
	
}
