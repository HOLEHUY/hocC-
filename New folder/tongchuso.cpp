#include<iostream>
using namespace std;
int main()
{int s=0,m,n;
 cout<<"nhap so n :";
 cin>>n; m=n;
 while(m!=0)
 {s=s+m%10;
  m=m/10;
 }
 cout<<"tong so cac chu so la : "<<s<<endl;
 return 0;
 }
