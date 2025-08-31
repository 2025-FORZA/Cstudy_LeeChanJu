#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    
    int arr[m];
    for (int i=0; i<m; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum=0;
    for (int i=1; i<=n; i++){
        for (int j=0; j<m; j++){
            if( i % arr[j] == 0){
                sum = sum + i;
                break;
            }
        }        
    }
    
    printf("%d", sum);
    
    return 0;
}
