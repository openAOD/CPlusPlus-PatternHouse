#include <bits/stdc++.h>
using namespace std;
  
/*function to calculate sum of given series*/
double sumOfSeries(double num)
{
    double res = 0, fact = 1;
    for (int i = 1; i <= num; i++) {
        /*fact variable store factorial of the i.*/
        fact = fact * i;
  
        res = res + (i / fact);
    }
    return (res);
}
  
/*Driver Function*/
int main()
{
    double n = 5;
    cout << "Sum: " << sumOfSeries(n);
    return 0;
}