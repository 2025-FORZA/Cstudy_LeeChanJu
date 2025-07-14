#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    
    int basket[n];
    for (int i=0; i<n; i++){
        basket[i]= i+1;
    }
    
    int temp = 0;
    int a=0;
    int b=0;
    for (int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        
        for (int j=0; j<=(b-a)/2; j++){
            temp = basket[a+j-1];
            basket[a+j-1] = basket[b-j-1];
            basket[b-j-1] = temp;
        }
        
    }
    
    for (int i=0; i<n; i++){
        printf("%d ", basket[i]);
    }
    
    return 0;
}
