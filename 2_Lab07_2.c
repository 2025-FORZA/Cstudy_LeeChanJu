#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	int total = 0;
	for (int i = 0; i < 10; i++) {
		int number;
		scanf("%d", &number);

		total += number; // 계속 더해가다가

		if (total > 100) {

			if (100 - (total - number) < total - 100) {
				total = total - number;
				break;
			} // 

			else {
				break;
			}


		} // 100 넘겼을 때 비교 -> 차이 적은 거 선택 (100 전 100 후)
		// 작은거 = total -number, 큰거 = total
		else if (total == 100) break;

	}

	printf("%d", total);

	return 0;
}
