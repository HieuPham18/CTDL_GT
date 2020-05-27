#include<bits/stdc++.h>
using namespace std;
/*
Mang F[] luu do dai xau Fibonaci 
1 1  2   3    5      8           13 ......
A B A.B B.AB AB.BAB BAB.ABBAB    ABBAB.BABABBAB

n = 1 -> A 
n = 2 -> B  
n = 3 -> i = 1 <= F[n-2] return fiBoWord(n-2,i) // xau FW[n-2] giong F[n-2] ki tu dau cua FW[n]
	  -> i = 2 >  F[n-2] return fiBoWord(n-1,i-F[n-2]) 
*/

int F[100]; 
void init(){
	F[1]=1; F[2]=1;
	for(int i=3;i<93;i++)
		F[i]=F[i-2]+F[i-1];
}
char dayfibonaci(int n, int i){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(i<=F[n-2])
		return dayfibonaci(n-2,i);
	return dayfibonaci(n-1,i-F[n-2]);
}
int main(){
	int t; cin>>t;
	init();
	while(t--){
		int n, i;
		cin>>n>>i;
		cout<<dayfibonaci(n,i)<<endl;
	}
	return 0;
}

