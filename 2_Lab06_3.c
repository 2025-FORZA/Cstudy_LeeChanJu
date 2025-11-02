#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int total = 0;
	for (int i = 0; i < x - 1; i++) {
		total += month[i];
	}
	total += y;

	const char* day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int what_day = total % 7;
	printf("%s\n", day[what_day]);

	return 0;
}
