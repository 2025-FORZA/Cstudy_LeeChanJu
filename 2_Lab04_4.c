#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int arr[500500];

	int index=0;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			arr[index] = i;
			index++;
		}
	}

	int total = 0;
	for (int k = a-1; k <= b-1; k++) {
		total += arr[k];
	}

	printf("%d", total);

	return 0;
}
