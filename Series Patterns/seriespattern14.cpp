// CPP Program to find the sum of first n terms.
#include<bits/stdc++.h>
using namespace std;

// Return the sum of first n term of AGP
int sumofNterm(int a, int d, int b, int r, int n)
{	
	// finding the each term of AGP and adding
	// it to sum.
	int sum = 0;
	for (int i = 1; i <= n ; i++)
		sum += ((a + (i -1) * d) * (b * pow(r, i - 1)));
	return sum;
}

// Driven Program
int main()
{
	int a = 1, d = 1, b = 2, r = 2, n = 3;
	cout << sumofNterm(a, d, b, r, n) << endl;
	return 0;
}
