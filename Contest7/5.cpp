#include<bits/stdc++.h>
using namespace std;

int A[100005],B[100005];
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		int x=0, y=0;
		memset(B, 0, sizeof B);
		string st;
		getline(cin,st);
		if(st == "") cout<<"0"<<endl;
		else{
			int n = st.length();
			st=" "+st;
			for(int i=1; i<=n; i++){
				if(st[i] == '(')
					A[++x] = i;
				else if(x!=0 && st[i]==')'){
					B[i] = B[A[x]-1]+i-A[x]+1;
					y = max(y,B[i]);
					x--;
				}
			}
			cout<<y<<endl;
		}
	}
}

