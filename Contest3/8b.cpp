#include<bits/stdc++.h>
using namespace std;
int n, s[1001], f[1001];
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>s[i];
        for(int i=0; i<n; i++) cin>>f[i];
//        for(int i=0; i<n-1; i++){
//            for(int j=i+1; j<n; j++){
//                if(f[i]>f[j]){
//                    int a=f[i]; f[i]=f[j]; f[j]=a;
//                    int b=s[i]; s[i]=s[j]; s[j]=b;
//                }
//            }
//        }
	sort(f,f+n);
	sort(s,s+n);
        int dem=1, i=0;
        for(int j=1; j<n; j++){
            if(s[j]>=f[i]){
                dem++;
                i=j;
            }
        }
       cout<<dem<<endl;
    }
}
