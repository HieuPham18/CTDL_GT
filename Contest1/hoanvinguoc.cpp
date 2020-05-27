#include <bits/stdc++.h> 
using namespace std; 
int n=4, a[100];
void display(int a[], int n) { 
    for (int i = 1; i < 4; i++) { 
        cout << a[i] << " "; 
    } 
    cout << endl; 
} 
void findPermutations(int a[], int n) { 
    sort(a, a + n); 
    reverse(a, a + n); 
    cout << "Possible permutations are:\n"; 
    do { 
        display(a, n); 
    } while (prev_permutation(a, a + n)); 
} 

int main() { 
    for(int i=1; i<4; i++){
    	a[i]=i;
	}
    findPermutations(a, n); 
} 
