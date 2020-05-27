#include<iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int a, b;
char s[100];
void swap(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}
int cmp(const void *a, const void *b){
    return (*(char*)a - *(char*)b);
}
void in(){
	for(int i=1; i<=n; i++)
			cout<<a[i]<<" ";
	cout<<endl;
}
void nhap(){
	for(int i=1; i<=n; i++)
			cin>>a[i];
}
void sinhkt(){
	int i=n-2;
	while(i>0&&s[i]>s[i+1]) i--;
	if(i==0) stop=1;
	else{
		int k=n-1;
		puts(s);
		while(s[i]>=s[k]) k--;
		int t=s[i]; s[i]=s[k]; s[k]=t;
		int a=i+1, a=n-1;
		while(a<b){
			   swap(&s[a], &s[b]);
                a++;b--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		gets(s);
    	n = strlen(s);
    	int A[26]={0};
    	qsort(s, n, sizeof(char), cmp); 
 	    while(!stop){
		    sinhkt();
		    in();
		}
	}
}
