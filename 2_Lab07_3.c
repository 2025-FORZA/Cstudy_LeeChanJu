#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int k, int n) {
	if (k == 0) return n;
	if (n == 0) return 0;
	else return func(k - 1, n) + func(k, n - 1);
}


int main() {
	int t, k, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", func(k, n));
	}

	return 0; 
}
