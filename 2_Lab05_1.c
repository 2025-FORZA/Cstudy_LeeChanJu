#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int arr[1001];
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		arr[i] = x;
	}

	int max[1001];
	for (int i = 0; i < n-1; i++) {
		for (int j=0; j<n-1-i; j++) {
			if (arr[j] < arr[j + 1]) {
				int prime;
				prime = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = prime;
			}
		}
	}

	printf("%d", arr[k - 1]);
	

	return 0;
}
