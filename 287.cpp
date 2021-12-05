#include<bits/stdc++.h>

using namespace std;

int main()
{
  
  int n=4;
  for(int i=1;i<=n;i++)
  {
  	 for(int j=1;j<=i;j++)
  	 {
  	 	cout<<i<<" ";
	   }
	   
	   for(int k=1;k<=2*n-2*i;k++)
	   {
	   	cout<<"  ";
	   }
	   
	   for(int j=1;j<=i;j++)
	   {
	   	 cout<<i<<" ";
	   }
	   cout<<endl;
  }
  
  for(int i=n+1;i<2*n;i++)
  {
  	 for(int j = 1;j<=2*n-i;j++ )
  	 {
  	 	cout<<i<<" ";
	 }
	   
	 for(int k = 1;k<=2*(i-n);k++)
     {
	   	  cout<<"  ";
	 }
	   
	 for(int j = 1;j<=2*n-i;j++ )
  	 {
  	 	cout<<i<<" ";
	 }
	cout<<endl;
	
  }
   
  
 return 0;
}


