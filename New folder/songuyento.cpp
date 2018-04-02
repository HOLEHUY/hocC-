#include<iostream>
using namespace std;
int kiemtra(int n)
{int i,s=0;
 if(n<=1) return 0;
 if(i==2) return 1;
 for(i=2;i<=n;i++) if(n%i==0) s=s+1 ;
 if(s>1) return 0; else return 1;
}
int main()
{int n,i;
 cout<<"nhap n : ";
 cin>>n;
 for(i=1;i<=n;i++) {
 if(kiemtra(i)==1) cout<<i<<"\t";}
 return 0;
}
