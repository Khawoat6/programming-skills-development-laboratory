#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x,y,n,count;
	
	cin>>x>>y>>n;
	int h[n];
	//cout<<x<<y<<n;
	for (int i=0;i<n;i++){
		cin>>h[i];
	}
	int tmp=0;
	while(tmp<n){
		if ((h[tmp]-x)>0){
			h[tmp]=(h[tmp]-x)+y;
			//cout<<"h["<<tmp<<"] : "<<h[tmp]<<endl;
			count+=1;
		}
		else {
			count+=1;
			tmp+=1;
			
		};
	}
	
	cout<<count;
	
}
