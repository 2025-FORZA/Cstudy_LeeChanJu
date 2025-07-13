#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int number;
    scanf("%d", &number);
    int max = number;
    int min = number;
    
    for (int i=0; i<n-1; i++){
        int number;
        scanf("%d", &number);
        
        if (number>max){
            max= number;
        }
        
        if (number<min){
            min = number;
        }
            
    }
    printf("%d %d", min, max);
    
    return 0;
}
