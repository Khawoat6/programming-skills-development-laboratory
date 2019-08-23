#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int tmp=0;
	int x=n-m;
	int tmp2=0;
	while(1){
		if(x >= k){			
			tmp+=k;
			break;	
		}
		else if(n >=k){
			
			tmp+=k;
			k=0;
		}
		else{
		
		k-=x;
		tmp+=n+m;
		//cout<<"K: "<<k<<"tmp : "<<tmp<<endl;
		}
		
		
	}
	cout<<tmp;
	
}
