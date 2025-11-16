#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
	const char* s1 = (const char*)a;
	const char* s2 = (const char*)b;

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 != len2) return len1 - len2;   // 길이가 짧은 순
	return strcmp(s1, s2);                  // 길이가 같으면 사전순
}

char arr[20000][51];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}

	qsort(arr, n, 51, cmp);

	printf("%s\n", arr[0]);
	for (int i = 1; i < n; i++) {
		if (strcmp(arr[i - 1], arr[i])!=0) {
			printf("%s\n", arr[i]);
		}
	}

	return 0;
}
