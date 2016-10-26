#include <iostream>
using namespace std:
int Get(int n,int x)
{
  if(n==0)
     return 1 ;
  else if(n==1)
     return x;
  else if(n%2==0)
     {
	int r=Get(n/2,x);
	return r*r;
     }
  else 
     {
	r=Get((n-1)/2,x);
	return r*r*x;
     }
  
}
int main()
{
  int x=0;
  int n=0; 
  while(cin>>x>>n)
  cout<<Get(n,x)<<endl;
  return 0;
}
