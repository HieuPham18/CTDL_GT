#include <iostream>
//bai22
using namespace std;
 
int inp[11][11];
int n;
char x[100];
bool printed=false;
 
void input()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>inp[i][j];
}
 
void in(int k)
{
    for(int i=0;i<k;i++)
        cout<<x[i];
       
    cout<<" ";
    printed=true;
}
 
void Try(int i, int j, int k)
{
    if(i==n-1 && j==n-1)
    {
        in(k);
        return;
    }
   
    if(i+1<n && inp[i+1][j]==1)
    {
        x[k]='D';
        Try(i+1,j,k+1);
    }
   
    if(j+1<n && inp[i][j+1]==1)
    {
        x[k]='R';
        Try(i,j+1,k+1);
    }
}
 
int main()
{
    int T;
    cin>>T;
    cin.ignore();
   
    while(T--)
    {
        cin>>n;
        input();
        printed=false;
       
        if(inp[0][0]!=1)
            cout<<"-1";
        else
        {
            Try(0,0,0);
            if(!printed)
                cout<<"-1";
        }
       
        cout<<endl;
    }
    return 0;
}
