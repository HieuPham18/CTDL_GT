#include<bits/stdc++.h>
using namespace std;
main(){
    int s[100];
    int t; cin>>t;
    while(t--){
        string gray3;
        cin>>gray3;
        cout << gray3[0];
        s[0]=gray3[0]-'0';
        for (int k = 1; k<gray3.length(); k++){
            s[k]=(gray3[k]-'0')^s[k-1];
            cout<<s[k];
        }
        cout <<endl;
    }
}
