#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long a, b, v;
	scanf("%lld %lld %lld", &a, &b, &v);

	int up = a - b;
	int criterion = v - a;
	int day;

	if (a >= v) {
		day = 1;
	}
	else {
		day = criterion / up;
		if (criterion % up != 0) {
			day += 1;
		}
		day += 1;
	}

	printf("%lld\n", day);


	return 0;
}
