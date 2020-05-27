#include<bits/stdc++.h>
#include<stack>
using namespace std;
 
int main(){
	int T;cin >> T;
	cin.ignore();
	while(T--)
	{
		string s;
		stack<char> a;
		getline(cin, s);
		for(int i=0 ; i<s.length() ; i++)
		{
			if(s[i]!=' ')
			{
				a.push(s[i]);
			}
			if(s[i]==' ' || s[i+1]==NULL)
			{
				while(!a.empty())
				{
					cout << a.top(); a.pop();
				}
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
