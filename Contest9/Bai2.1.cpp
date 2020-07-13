#include<bits/stdc++.h>
using namespace std;
main(){
	int n, i,j, a[55][55] = {0};
	cin >> n; cin.ignore();

	for (i = 1; i <= n; i++) {
		char s[200]; gets(s);
		char * p = strtok(s," ");
		while(p!=NULL){
            int x = atoi(p);
            a[i][x] = 1;
            a[x][i] = 1;
            p = strtok(NULL," ");
		}
	}

	for (i = 1; i <= n; i++)
		for (j = i+1; j <= n; j++)
			if (a[i][j] ) cout << i << " " << j << endl;
}
