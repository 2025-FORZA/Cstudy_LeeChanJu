#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int r, c, zr, zc;
	scanf("%d %d %d %d", &r, &c, &zr, &zc);

	char arr[50][50];
	for (int i = 0; i < r; i++) {
		scanf("%s", arr[i]);
	}

	for (int i = 0;i < r;i++)  {
		for (int z = 0; z<zr; z++){
			for (int j = 0; j < c; j++) {
				for (int k = 0;k < zc;k++) {
					printf("%c", arr[i][j]);
				} // 여러개씩 출력하기
			}
			printf("\n");
		} // '한개'
	} // '한줄'

	return 0;
}
