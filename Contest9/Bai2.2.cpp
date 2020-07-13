#include<bits/stdc++.h>
using namespace std;
main(){
    int n,i,j,u;
    vector<int> List[55];
    cin>>n; cin.ignore();

    for(i=1; i<=n; i++){
        string s; getline(cin,s);
        istringstream s_cin(s);
        while(s_cin>>u) List[i].push_back(u);
    }

    for(i=1; i<=n; i++)
        for(j=0; j<List[i].size(); j++)
            if(j>i)
                cout<<i<<" "<<j<<endl;
}
