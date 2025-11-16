#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[1001];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}// 배열에 입력받기

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}// 오름차순 정렬하기

	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i] * (n - i);
	}

	// 숫자 누적해서 더하기

	printf("%d", total);


	return 0;
}
