#include<iostream>
#include<conio.h>
using namespace std;
void xuLy(int n, int X[], int T[], int i)
{
    int j;
    for(j = X[i - 1]; j <= (n - T[i - 1]); j++)  
    {
        X[i] = j;
        T[i] = T[i - 1] + j;
 
        if(T[i] == n)  
        {
            int temp;
            for(temp = 1;  temp <= i; temp++)   
            {
                cout<<X[temp];
            }
            cout<<endl;
        }
 
        else xuLy(n, X, T, i + 1);

    }
}
 
int main()
{
    int n;
    printf("Nhap vao n : ");
    cin>>n;
 
    int X[n + 1];  
    int T[n + 1];
 
    X[0] = 1;
    T[0] = 0;
 
    xuLy(n, X, T, 1);  

}
