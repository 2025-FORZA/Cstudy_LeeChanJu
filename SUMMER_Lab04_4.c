#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int number[n];
    int max = 0, sum =0;
    
    for (int i=0; i<n; i++){
        scanf("%d", &number[i]);
    }
    
    for (int i=0; i<n; i++){
        sum += number[i];
        if (max<number[i]){
            max = number[i];
        }
    }
    
    double score;
    score = (double)sum / max * 100 / n;
    printf("%f", score);
  
    return 0;
}
