#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[1001];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int total=0;
    int max_height=0;
    for (int i=0; i<n-1; i++){
        if (arr[i]<arr[i+1]){
            total += (arr[i+1]-arr[i]);
        }
        else{
            if (max_height<total){
                max_height = total;
            }
            total = 0;
        }
    }
    
    if (max_height<total){
        max_height = total;
    }
    
    printf("%d", max_height);
    
    return 0;
}
