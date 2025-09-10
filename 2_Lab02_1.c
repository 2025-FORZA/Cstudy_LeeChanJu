#include <stdio.h>

int main(){
    int x,n,a,b;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    int total=0;
    for (int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        total += a*b;
    }
    
    if (total == x) printf("Yes");
    else printf("No");
        
    
    return 0;
}
