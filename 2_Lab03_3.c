#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int h, max, total = 1;
	int arr[100001];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	} // 배열에 입력받기

	int t = n - 1;
	max = arr[t];
	for (int i = t; i > 0; i--) {
		if (arr[i - 1] > max) {
			total++;
			max = arr[i - 1];
		}
	}

	// 역순으로 접근하여 max 값을 지정하고 그것보다 크면 total 키우기
	// max는 계속 갱신됨
	printf("%d", total);

	return 0;
}
