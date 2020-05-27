#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}
int cmp(const void *a, const void *b){
    return (*(char*)a - *(char*)b);
}
int main(){
    int t,n,i,a,b,k; char s[10];
    scanf("%d", &t);
    while(t--){
	    gets(s);
	    n = strlen(s);
	    qsort(s, n, sizeof(char), cmp); 
	    do {
	        i = n-2;
	        puts(s);
	        while(i>=0 && s[i]>=s[i+1]) i--;
	        if(i>=0) {
	            k = n-1;
	            while(s[k]<=s[i]) k--;
	            swap(&s[k], &s[i]);
	            a = i+1; b = n-1;
	            while(a<b) {
	                swap(&s[a], &s[b]);
	                a++;b--;
	            }
	        }
	    }
	    while(i>=0);
	}
}
