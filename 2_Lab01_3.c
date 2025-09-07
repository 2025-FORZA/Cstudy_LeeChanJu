#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    
    int arr[101];
    int max=0;
    int score=0;
    
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<n-2; i++){        
        for (int j=i+1; j<n-1; j++){                     
            for (int k=j+1; k<n; k++){
                
                score = arr[i]+arr[j]+arr[k];
                if (score<=m && score>max){
                    max=score;
                } 
            }
        }
    }
    
    printf("%d", max);
    
    return 0;
}
