#include<bits/stdc++.h>
using namespace std;
void Merge(int a[], int left, int mid, int right){
	int *tmp, i = left, j = mid + 1; 
	tmp = new int[right - left + 1]; 
	for (int k=0; k<=right-left; k++){
		if (a[i]<a[j]){	
			tmp[k]=a[i]; i++; 
		}
		else {
			tmp[k]=a[j]; j++; 
		}
		if (i == mid+1) {
			while(j<=right){
				k++;
				tmp[k]=a[j];
				j++;
			}
			break;
		}
		if (j == right+1) {
			while (i<=mid){
				k++;
				tmp[k]=a[i];
				i++;
			}
			break;
		}
	}
	for (int k=0; k<=right-left; k++) 
		a[left+k]=tmp[k];
	delete tmp;
}
void MergeSort(int a[], int left, int right){
	if (right > left){
		int mid; 
		mid = (left + right) / 2;
		MergeSort(a, left, mid); 
		MergeSort(a, mid + 1, right); 
		Merge(a, left, mid, right); 
	}
}
int main(){
	int t, n , a[10005]; cin>>t;
	while(t--){
		cin>>n;
		for (int i=1; i<=n; i++) cin >> a[i];
		MergeSort(a, 1, n);
		for (int i=1; i<=n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
