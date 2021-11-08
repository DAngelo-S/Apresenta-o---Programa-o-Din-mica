#include<bits/stdc++.h>

using namespace std;

#define MAXN 92

long long dp[MAXN];

long long fib (int n) {
	if (n == 0 || n == 1)
		return dp[n] = 1;
	
	if (dp[n] != 0)
		return dp[n];
	
	return dp[n] = fib(n-1) + fib(n-2);
}

int main () {
	int n;

	memset(dp, 0, sizeof(dp));

	cin >> n;
	cout << fib(n-1) << endl;
}
