#include <stdio.h>
#include <string.h>

int main() {
	int t, r;
	char s[21];

	scanf("%d", &t);

	for (int k = 0; k < t; k++) {
		scanf("%d %s", &r, s);
		
		for (int i = 0; i < strlen(s); i++) {

			for (int j = 0; j < r; j++) {
				printf("%c", s[i]);

			}// 글자 반복

		} // i번째 글자
        printf("\n");

	} // 케이스 한개


	return 0;
}
