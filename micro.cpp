// C++ code for the above approach:
#include <bits/stdc++.h>
using namespace std;

int findTiles(int M, int N)
{
	int x = sqrt(4 * N + M);
	if (x % 2 == 0)
		return x;
	else {
		int inter = ((x - 1) * (x - 1)) / 4;
		if (4 * min(inter, N) + M >= x * x)
			return x;
		else
			return x - 1;
	}
}

// Drivers code
int main()
{
	int M = 4;
	int N = 3;

	// Function Call
	cout << findTiles(M, N);
	return 0;
}

// This code is contributed by ragul21
