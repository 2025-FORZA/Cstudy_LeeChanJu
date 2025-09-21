#include <stdio.h>

int main() {
	int a, b, c, x;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	x = a * b * c;

	int count[11] = { 0 };
	while (x>0) {
		int w;
		w = x % 10;
		count[w]++;
		x /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}

	return 0;
}
