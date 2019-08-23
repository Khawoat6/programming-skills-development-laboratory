
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int cal(int N,int K,int val[],int wt[],int i,int n){

	while(i<K){
		sort(val, val+n,greater<int>()); 
		wt[i]=val[0];
		val[0]-=1;
		i+=1;	
	}
	
	
	for (int i=0; i<K; i++) {
        cout<<wt[i];
    }
    

	int sum=0;
//	cout<<accumulate(wt,wt+n,sum);
	return accumulate(wt,wt+n,sum);
}
int main() {
    int N, K;
    cin >> N >> K;

    int val[N], wt[N];
    for (int i=0; i<N; i++) {
        cin >> val[i];
        wt[i] = 0;
    }
    int j=0;
    int n = sizeof(val)/sizeof(val[0]); 
    
  
   // sort(val, val+n,greater<int>()); 
	
  	cout<<cal(N,K,val,wt,j,n);
  	
  	
    return 0;
    
    
}
