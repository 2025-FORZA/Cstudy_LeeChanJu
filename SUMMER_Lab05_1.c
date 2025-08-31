#include <stdio.h>

int main(){
    int n, result = 1;
    scanf("%d", &n);
    
    for (; n>0; n--){
        result = result*n;
    }

    
    printf("%d", result);
    
    return 0;
}
