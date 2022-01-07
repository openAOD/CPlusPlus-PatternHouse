#include <stdio.h>
#include <math.h>
//function to return the nth term of GP
int Nth_of_GP(int a, int r, int n) {
   // the Nth term will be
   return( a * (int)(pow(r, n - 1)) );
}
//Main Block
int main() {
   // initial number
   int a = 1;
   // Common ratio
   int r = 2;
   // N th term to be find
   int n = 8;
   printf("The %dth term of the series is: %d\n",n, Nth_of_GP(a, r, n) );
   return 0;
}