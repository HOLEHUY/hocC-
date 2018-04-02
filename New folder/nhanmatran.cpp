#include<iostream>
using namespace std;
void nhanmatran(float a[],float b[][],float c[][],int n)
{int i,j,k;
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {c[i][j]=0;
  for(k=1;k<=n;k++)
  c[i][j]=a[i][k]+b[k][j];
  return 0;
 }
}
int main()
{int n,i,j;
 float a[100][100],b[100][100],c[100][100];
 cout<<"nhap n : ";cin>>n;
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {cout<<"nhap a["<<i<<"]["<<j<<"] : "<<endl;
  cin>>a[i][j];
 }
  for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {cout<<"nhap b["<<i<<"]["<<j<<"] : "<<endl;
  cin>>b[i][j];
 }
 return 0;
}
