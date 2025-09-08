#include <stdio.h>

int main() {
	int t,a,b;
	scanf("%d", &t);


	for (int i = 0; i < t; i++) {

		scanf("%d %d", &a, &b);

		for (int i = 1; i <= a * b; i++) {
			if (i % a == 0 && i % b == 0) {
				printf("%d", i);
				break;
			}
		}

		int small;
		if (a < b) small = a;
		else small = b;


		int max;
		for (int i = 1; i <= small; i++) {
			if (a % i == 0 && b % i == 0) {
				max = i;
			}
		}
		printf(" %d\n", max);

	}


	return 0;
}
