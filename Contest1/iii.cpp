#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n)
{ printf("nhap so phan tu :" );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { printf(" phan tu thu %d :",i);
    scanf("%d",&a[i]);
  }
}
int xuatmang(int a[],int n)
 {
  for(int i=0;i<n;i++)
     {
        printf("%d \t",a[i]);
     }
 }
void daonguocchieu(int a[],int n)  //day la cach 1
{
 for(int i=0;i<=n/2;i++)
  {
   int temp=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=temp;
  }
 printf("\n mang dao nguoc la: ");
 for(int i=0;i<n;i++)
     {
        printf("%d \t",a[i]);
     } 
}
//void daonguocchieu2(int a[],int n) //cach nay thi chi can xuat mang nguoc lai
//{
// for(int i=n;i>=0;i--)
// {
// printf("%d \t",a[i]);
// }
// 
//}
int main()
{
 int a[50],n;
 nhapmang(a,n);
 xuatmang(a,n);
 //daonguocchieu(a,n);
 daonguocchieu2(a,n);
 return 0;
}
