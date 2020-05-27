#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, a[100], dem=0;
	cout<<"Nhap N: "; 
	cin>>n;
	while(n<0){
		cout<<"Nhap lai N: ";
			cin>>n;
	}
	cout<<"Nhap Day:"<<endl;
	for(int i=1; i<=n; i++) cin>>a[i];
	cout<<"Nhap X: ";
	cin>>x;
	for(int i=1; i<=n; i++)
		if(a[i]==x) dem++;
	if(dem==0){
		cout<<"Phan tu khong co trong day"<<endl;
	}
	else{
		cout<<"Phan tu xuat hien "<<dem<<" lan"<<endl;
	}
}
