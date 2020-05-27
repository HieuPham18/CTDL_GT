#include<bits/stdc++.h>
using namespace std;
int n, k, a[10], ok[10]={0}, j=0;
	  void khoitao(){
	  	for(int i=0; i<=n; i++){
	  		a[i]=i;
		  }
	  }
	  void inkq(){
	  	for(int i=1; i<=n; i++){
	  		cout<<a[i];
	  		cout<<endl;
		  }
	  }
	  int dembit(){
	  	int dem =0;
	  	for(int i=1; i<=n;i++ ){
	  		if(a[i]==1){
	  			dem++;
			  }
		  }
		  if(dem==k){
		  	return 1;
		  }
		  return 0;
	  }
	  void sinh(){
	  	int i=n;
	  	while(a[i]=1){
	  		a[i]=0;
	  		i--;
		  }
	  	if(i==0){
			ok[j]=1;
			j++;
        }
		else
		    a[i]=1;
  	  }
int main(){
	
}
