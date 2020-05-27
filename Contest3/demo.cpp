#include<bits/stdc++.h>
using namespace std;
long long sum_min,sum_max;
void Tinh(long long a, long long b){
	sum_min=a+b;
	sum_max=a+b;
	int t=0;
	while(a>0 || b>0){
		if(a%10==6) sum_min-=pow(10,t);
		if(a%10==5) sum_max+=pow(10,t);
		if(b%10==6) sum_min-=pow(10,t);
		if(b%10==5) sum_max+=pow(10,t);
		a/=10; b/=10; t++;
	}
}
int main(){
	long long a, b;
	cin>>a>>b;
	Tinh(a, b);
	cout<<sum_min<<" "<<sum_max<<endl;
	return 0;
}


