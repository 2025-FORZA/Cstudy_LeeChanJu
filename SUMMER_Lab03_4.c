#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = n / 5;
    int b = n % 5;
    int result = -1;

    while (a >= 0) {
        if (b % 3 == 0) {
            result = a + (b / 3);
            break;
        }
        a--;
        b += 5;
    }

    printf("%d\n", result);
    return 0;
}
