#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<n-1; i++){
        int sum =0;
        int temp = i;
        while (temp>0){
            int digit = temp%10;
            temp /= 10;
            sum += digit;
        }
        if (n == i + sum){
            printf("%d", i);
            return 0;
        }
    }
    
    printf("0");
    return 0;
}
