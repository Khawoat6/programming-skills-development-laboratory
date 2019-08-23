#include<iostream>
#include<stdio.h>
using namespace std;
int check(int n){
	int i;
  	bool isPrime = true;
  	for(i = 2; i <= n / 2; ++i)
  	{
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  	}
	
	return (isPrime);
}
int main(){
	int n,x,k;
	
	cin>>n>>k;
	int tmp=k;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>x;
		arr[i]=x;
	}
	//cout<<k<<endl;
	
	for (int j=0;j<n;j++){
		if(check(arr[j])== false){
			
			k-=1;
			if(k<0){
				break;
			}
			//cout<<"arr : "<<j<<" white"<<" K : "<< k <<endl;
		}
		else if(check(arr[j])==true){
			k=tmp;
			//cout<<"arr : "<<j<<" friend"<<" K : "<< k<<endl;
		}
		
		
	}
	if(k>=0){
	
	cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	
}
