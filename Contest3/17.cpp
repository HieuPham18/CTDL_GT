#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k; cin>>t;
	string s;
	while(t--){
		cin>>k>>s;
		int d[300]={0};
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
		}
		priority_queue<int,vector<int> > pq; 
		int dem=0;
		for(int i=0;i<s.size();i++){
			if(d[s[i]]>0){
				dem++;
				pq.push(d[s[i]]);
				d[s[i]]=0;
			}
		}
		int m;
		while(k>0){
			m=pq.top();pq.pop();
			m--;
			pq.push(m);
			k--;
		}
		int kq=0;
		while(pq.size()>0){
			kq+=pq.top()*pq.top();
			pq.pop();
		}
		cout<<kq<<endl;
	}
}
