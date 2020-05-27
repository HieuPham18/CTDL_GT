// xep quan hau 1
#include<iostream>
using namespace std;
int n,a[100],dem=0; 
int cot[100],cheo1[100],cheo2[100];
	void Try(int i){
		for(int j=1; j<=n; j++){
			if(!cot[j] && !cheo1[i-j+n] && !cheo2[i+j-1]){
				a[i]=j;
				cot[j]=1; cheo1[i-j+n]=1; cheo2[i+j-1]=1;
				if(i==n) dem++;
				else Try(i+1);
				cot[j]=0; cheo1[i-j+n]=0; cheo2[i+j-1]=0;
			}
		}
	}
int main(){
	cin>>n;
	Try(1);
	cout<<dem<<endl;
}
