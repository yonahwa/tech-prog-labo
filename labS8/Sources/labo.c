#include "labo.h"

static long long tab[0x7ffffff] = { 0 };

long long fibonacci(int n) {
	if (tab[1] == 0) {
		memset(tab, -1, sizeof(long long) * 0x7ffffff);
	}
	if (n <= 1) { return n; }
	
	if (tab[n] == -1) {
		tab[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return tab[n];
	}
	else {
		return tab[n];
	}
}