
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int cal(int N,int T,int val[],int wt[],int i,int n){
	
	while(i<T){
		wt[i]=val[i];
		val[i]=0;
		i+=1;	
	}
	/*
	for (int i=0; i<T; i++) {
        cout<<wt[i];
    }
	*/
	int n2 = sizeof(wt)/sizeof(int);
	int sum=0;
	cout<<accumulate(wt,wt+n,sum);
	//return accumulate(wt,wt+n2,sum);
}
int main() {
    int N, T;
    cin >> N >> T;

    int val[N], wt[N];
    for (int i=0; i<N; i++) {
        cin >> val[i];
        wt[i] = 0;
    }
    int j=0;
    int n = sizeof(val)/sizeof(val[0]); 
  
    sort(val, val+n,greater<int>()); 
	
  	cal(N,T,val,wt,j,n);
  	
  	
    return 0;
    
    
}
