#include<iostream>
using namespace std;
int main()
{int n,i,j;
 float a[100][100];
 cout<<"nhap so an : ";cin>>n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n+1;j++)
  {cout<<"nhap he so a["<<i<<","<<j<<"]\t";cin>>a[i][j];
  }
  cout<<"\n";
 }
 return 0;
}
