#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int row = 0;
	int column = 0;

	char arr[50][50];
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}

	for (int i = 0; i < n;i++) {
		int status = 1;
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'X') {
				status = 0;
				break;
			}
		}
		if (status) row++;
	}


	for (int j = 0; j < m; j++) {
		int status = 1;
		for (int i = 0; i < n; i++) {
			if (arr[i][j] == 'X') {
				status = 0;
				break;
			}
		}
		if (status) column++;
	}

	if (row > column) {
		printf("%d", row);
	}
	else {
		printf("%d", column);
	}



	return 0;
}
