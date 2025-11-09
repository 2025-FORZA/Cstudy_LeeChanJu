#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, f;
	scanf("%d", &n);
	scanf("%d", &f);

	int num;
	num = (n / 100) * 100;// 두자릿수 제거

	int result;
	for (int i = 0; i <= 99; i++) {
		result = num + i;
		if (result % f == 0) break;
	}

	printf("%02d\n", (result % 100));

	return 0;
}
