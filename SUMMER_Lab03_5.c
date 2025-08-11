#include <stdio.h>

int main(){
    int fn[21];
    int n;
    scanf("%d", &n);
    
    fn[0] = 0;
    fn[1] = 1;
    
    for (int i=2; i<=n; i++){
        fn[i] = fn[i-1] + fn[i-2];
    }
    printf("%d", fn[n]);
    
    return 0;
}
