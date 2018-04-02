#include<iostream>
using namespace std;
int main()
{int n,m,s=0;
 cout<<"nhap so n : ";
 cin>>n;
 m=n;
 while(m!=0) 
 { s=s*10+m%10;
   m/=10;
 }
 cout<<"so dao nguoc cua "<<n<<" la "<<s<<endl;
 return 0;
}
