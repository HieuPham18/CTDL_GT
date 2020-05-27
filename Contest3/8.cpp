#include<bits/stdc++.h>
using namespace std;
int n, S[1001], F[1001];
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>S[i];
        for(int i=0; i<n; i++) cin>>F[i];
	        for(int i=0; i<n-1; i++){
	            for(int j=i+1; j<n; j++){
	                if(F[i]>F[j]){
	                    int a=F[i]; F[i]=F[j]; F[j]=a;
	                    int b=S[i]; S[i]=S[j]; S[j]=b;
	                }
	            }
	        }
	        int dem=1, i=0;
	        for(int j=1; j<n; j++){
	            if(S[j]>=F[i]){
	                dem++;
	                i=j;
	            }
	        }
       cout<<dem<<endl;
    }
}
