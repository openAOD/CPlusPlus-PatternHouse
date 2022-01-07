// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of the
// infinite AGP
void sumOfInfiniteAGP(double a, double d,
					double r)
{
	// Stores the sum of infinite AGP
	double ans = a / (1 - r)
				+ (d * r) / (1 - r * r);

	// Print the required sum
	cout << ans;
}

// Driver Code
int main()
{
	double a = 0, d = 1, r = 0.5;
	sumOfInfiniteAGP(a, d, r);

	return 0;
}
