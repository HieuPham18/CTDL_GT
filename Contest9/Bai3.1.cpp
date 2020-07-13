#include<bits/stdc++.h>
using namespace std;
int a[1005][1005]={0};
main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if(a[i][j]) cout<<j<<" ";
        cout<<endl;
    }
}
