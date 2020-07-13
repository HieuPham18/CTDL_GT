#include<bits/stdc++.h>
using namespace std;
int a[1005][1005]={0};
main(){
    int n,i,j,u;
    cin>>n; cin.ignore();

    for(i=1; i<=n; i++){
        string s; getline(cin,s);
        istringstream s_cin(s);
        while(s_cin>>j) a[i][j] = 1;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout<<endl;
    }
}
