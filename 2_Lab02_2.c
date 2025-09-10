#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int min, max;
    scanf("%d", &min);
    max = min;
    
    int score;
    for (int i=0; i<n-1; i++){
        scanf("%d", &score);
        if (score<min) min = score;
        if (score>max) max = score;
    }
    
    printf("%d %d", min, max);
    
    return 0;
}
