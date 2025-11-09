#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[9];

	int total = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		total += arr[i];
	}

	int over = total-100;
	int found = 0;
	for (int i = 0; i < 8;i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == over) {
				arr[i] = 0;
				arr[j] = 0;
				found = 1;
				break;
			}
		}
		if (found) break;
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8 - i; j++) {
			int temp;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 2; i <= 8; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
