#include<bits/stdc++.h>
using namespace std;
long long timkiem(int tmp){ 
    if(tmp==0)  return 0;  
    else return (tmp%2 + 10*timkiem(tmp/2)); 
} 
int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int i=1;
       while(1){
           if(timkiem(i)*9%n==0){
               cout<<timkiem(i)*9<<endl;
               break;
           }
           i++;
       }  
   }  
}
