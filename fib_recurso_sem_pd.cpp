#include<bits/stdc++.h>

using namespace std;

long long exec = 0;

long long fib (int n) {
	exec++;
	if (n == 0 || n == 1)
		return 1;
	return fib(n-1) + fib(n-2);
}

//long long fib_ma_pratica (int n) {
//	return (n == 0 || n == 1 ? 1 : fib_ma_pratica(n-1) + fib_ma_pratica(n-2));
//}

int main () {
	int n;
	cin >> n;
	cout << fib(n-1) << endl;
	//cout << fib_ma_pratica(n-1) << endl;
	cout << "Numero de chamadas: " << exec << endl;
}
