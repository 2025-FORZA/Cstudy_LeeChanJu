#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int total = 0;
	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);

		if (num == 1) continue; // 1인경우
		else if (num == 2) {
			total++;
			continue;
		} // 2인경우

		int status = 1;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				status = 0;
				break;
			}
		}// 각 숫자로 나누는 중
		if (status == 1) total++;

	} // 각각의 입력받은 수들

    printf("%d", total);
	return 0;
}
