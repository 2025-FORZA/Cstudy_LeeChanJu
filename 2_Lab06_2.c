#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int e, f, c;
	scanf("%d %d %d", &e, &f, &c);

	int num = e + f;
	int quotient, remainder;
	int total=0;

	quotient = num / c;
	remainder = num % c;
	total += quotient;

	while (num >= c) {
		num = quotient + remainder;
		quotient = num / c;
		remainder = num % c;
		total += quotient;
	}

	printf("%d\n", total);

	return 0;
}
