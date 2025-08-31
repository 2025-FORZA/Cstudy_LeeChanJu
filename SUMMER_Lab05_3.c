#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        printf("%d", n); 

        while (n > 9) {
            int result = 1; 
            int temp = n;   
            
            while (temp > 0) {
                result *= (temp % 10); 
                temp /= 10;            
            }

            printf(" %d", result); 
            n = result;           
        }
        printf("\n"); 
    }

    return 0;
}
