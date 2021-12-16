//this program prints N length of the given series
#include<iostream> 
using namespace std;
#define N 10   //change here to get more length of the series
int main()
{
   int start=5 ; //start number is 5
   int num=start; //num is number to print
   int n=N;
   while(n) //if n numbers are over, loop exits
   {
       cout <<  num << " ";
       num=num*2;    //series logic : current number is previous number *2
       n=n-1;
   }
    return 0;
}
