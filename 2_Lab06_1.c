#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int arr[10001];

	int total = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[total] = i;
			total++;
		}
	}

	if (total >= k) {
		printf("%d", arr[k - 1]);
	}
	else {
		printf("0\n");
	}

	return 0;
}
