#include <stdio.h>

int main() {
	int hh, mm, ss;
	int hh2, mm2, ss2;
	scanf("%d:%d:%d", &hh, &mm, &ss);
	scanf("%d:%d:%d", &hh2, &mm2, &ss2);

	int time, time2;
	time = hh * 3600 + mm * 60 + ss;
	time2 = hh2 * 3600 + mm2 * 60 + ss2;

	int time3;
	time3 = time2 - time;

	if (time3 <= 0) time3 += (24 * 3600);

	int h, m, s;
	h = time3 / 3600;
	m = (time3%3600) / 60;
	s = (time3 % 60);

	printf("%02d:%02d:%02d", h, m, s);

	return 0;
}
