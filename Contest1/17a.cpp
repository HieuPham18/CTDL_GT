#include<bits/stdc++.h>
using namespace std;
int t,N,m,dung;
long long a[100],sum;
void khoitao(){
	for(int i=1;i<=m;i++){
		if(i==1) a[i]=9;
		else a[i]=0;
	}
}
void sinh(){
	int i=m;
	while(i>0&&a[i]==9){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=9;
	else dung=0;
}
long long kiemtra(){
	sum=0;
	for(int i=1;i<=m;i++){
		if(a[i]==9){
			sum=sum+ 9 * pow (10 , m-i);
		}
	}
	return sum;
}
int main(){
	cin>>t;
	while(t--){
		cin>>N;
		m=1;
		int c=1;
		while(c){
			khoitao();
			dung=1;
			while(dung){
				if(kiemtra() % N==0){
					cout<<kiemtra()<<endl;
					c=0;
					break;
				}
				sinh();
			}
			m++;
			dung=1;
		}
	}

}
