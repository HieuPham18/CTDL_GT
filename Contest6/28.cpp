#include<bits/stdc++.h>
using namespace std;
int n, a[105];
void InsertionSort(){
	int tmp, j;
	for(int i=0; i<n; i++){
		cout<<"Buoc "<<i<<": ";
		tmp = a[i];
		j=i-1;
		while(j>=0 && a[j]>tmp){
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1]=tmp;
		for(int k=0;k<=i;k++) cout<<a[k]<<" ";
		cout<<endl;	
	}
}
using namespace std;
int main(){
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	InsertionSort();
}
