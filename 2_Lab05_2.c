#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int t1, t2, t3, t4, t5, t6;
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
    scanf("%d", &t4);
    scanf("%d", &t5);
    scanf("%d", &t6);
    

	int total=0;
	for (int i = 1; i <= 100; i++) {
		int num = 0;

		if (i>=t1 && i<t2){
			num++;
		}
		if (i >= t3 && i < t4) {
			num++;
		}
		if (i >= t5 && i < t6) {
			num++;
		}

		if (num == 1) total += a;
		if (num == 2) total += b*2;
		if (num == 3) total += c*3;
	}

	printf("%d", total);

	return 0;
}
