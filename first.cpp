#include<iostream>
using namespace std;
int main()
{
  
   int l=0,p=1,c,n;
   cin>>n;
   for(int i=1;i<n;i++)
   {
    c=p+l;
    l=p;
    p=c;
    
   }
   cout<<c;
}