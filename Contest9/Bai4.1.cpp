#include<bits/stdc++.h>
using namespace std;
int a[1005][1005]={0};
main(){
	int n, i,j;
	cin >> n; cin.ignore();
	for (i = 1; i <= n; i++) {
		char s[5000]; gets(s);
		char *p = strtok(s," ");
		while(p!=NULL){
            int x = atoi(p);
            a[i][x] = 1;
            a[x][i] = 1;
            p = strtok(NULL," ");
		}
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
        cout<<endl;
	}
}
