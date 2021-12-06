#include<bits/stdc++.h>

using namespace std;

int main()
{
  
  int n=4,m;
  int p=0;
  for(int i=1;i<=n;i++)
  {  p=1;m=i;
  	 for(int j=1;j<=i;j++)
  	 {
  	 	cout<<p++<<" ";
	   }
	   
	   for(int k=1;k<2*(n-i);k++)
	   {
	   	cout<<"  ";
	   	p++;
	   }
	   if(i==n) m--;  
	   for(int j=1;j<=m;j++)
	   {
	   	 cout<<p++<<" ";
	   }
	   cout<<endl;
  }
  
  for(int i=n+1;i<2*n;i++)
  { p=1;
  	 for(int j = 1;j<=2*n-i;j++ )
  	 {
  	 	cout<<p++<<" ";
	 }
	   
	 for(int k = 1;k<2*(i-n);k++)
     {
	   	  cout<<"  ";
	   	  p++;
	 }
	   
	 for(int j = 1;j<=2*n-i;j++ )
  	 {
  	 	cout<<p++<<" ";
	 }
	cout<<endl;
	
  }
   
  
 return 0;
}

