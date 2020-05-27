#include<bits/stdc++.h>
using namespace std;
	int Merge(int a[], int p, int q, int r){
	    int n1, n2, i, j, k;  
	    n1 = q-p+1;
	    n2 = r-q;             
	    int L[n1], R[n2];
	    
	    for(i=0; i<n1; i++) L[i] = a[p+i];
	    for(j=0; j<n2; j++) R[j] = a[q+j+1];
	    i=0, j=0;
	    
	    for(k=p; i<n1 && j<n2; k++){
	        if(L[i]<R[j]) a[k] = L[i++];
	        else a[k]=R[j++];
		}
	    while(i<n1) a[k++] = L[i++];
	    while(j<n2) a[k++] = R[j++];
	}
	int MergeSort(int a[], int p, int r){
	    int q;                                
	    if(p<r){
	        q = (p+r)/2;
	        MergeSort(a, p, q);
	        MergeSort(a, q+1, r);
	        Merge(a, p, q, r);
	    }
	}
int main(){
	int t, n, a[1000005]; cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0; i<n; i++) cin>>a[i];
	    MergeSort(a, 0, n-1);
	    for(int i=0; i<n; i++) cout<<a[i]<<" ";
	    cout<<endl;
	}
}
