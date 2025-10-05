#include <stdio.h>

int main() {
    int n;
	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		
		int arr[100000];
		int index=0;
        int total=0;
		for (int i = 1; i <= n - 1; i++) {
			if (n % i == 0) {
				arr[index] = i;
				index++;
                total +=i;
			}
		}

		if (total == n) {
			printf("%d = %d", n, arr[0]);
			for (int i = 1; i < index; i++) {
				printf(" + %d", arr[i]);
			}
            printf("\n");
		}

		else {
			printf("%d is NOT perfect.\n", n);
		}
	}


	return 0;
}
