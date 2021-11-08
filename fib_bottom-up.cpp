#include<bits/stdc++.h>

using namespace std;

#define MAXN 100

int main () {
	long long fib[MAXN];
	int n;

	fib[0] = fib[1] = 1;
	
	for (int i = 2; i < MAXN; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}

	cin >> n;

	while (n > 0  && n <= MAXN) {
		cout << fib[n-1] << endl;
		cin >> n;
	}
	cout << "Numero invalido, programa interrompido" << endl;
}
