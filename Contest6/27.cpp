#include<bits/stdc++.h>
using namespace std;
int n, a[105];
void SelectionSort(){
	for(int i=1; i<n; i++){
		int min = i;
		cout<<"Buoc "<<i<<": ";
		for(int j=i+1; j<=n; j++)
			if(a[j]<a[min])
				min=j;
		swap(a[min], a[i]);
		for(int k=1; k<=n; k++) cout<<a[k]<<" ";
		cout<<endl;
	}
}
int main(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	SelectionSort();
}
