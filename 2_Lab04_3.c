#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[8], b[8];
	scanf("%s %s", a, b);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '6') a[i] = '5';
	} 
	int min_a = atoi(a);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '5') a[i] = '6';
	}
	int max_a = atoi(a);
	
	for (int i = 0; i < strlen(b); i++) {
		if (b[i] == '6') b[i] = '5';
	}
	int min_b = atoi(b);

	for (int i = 0; i < strlen(b); i++) {
		if (b[i] == '5') b[i] = '6';
	}
	int max_b = atoi(b);

	int min = min_a + min_b;
	int max = max_a + max_b;

	printf("%d %d", min, max);

	return 0;
}
