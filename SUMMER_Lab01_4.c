#include <stdio.h>
#include <string.h>

int main(){
    int k;
    char memo[201];
    scanf("%d", &k);
    scanf("%s", memo);
    
    int len = strlen(memo);
    int row = len / k;
    int index = 0;
    char table[20][200];
    for (int i=0; i<row; i++){
        
        if (i%2==0){
            for (int j=0; j<k; j++){
                table[i][j] = memo[index];
                index = index+1;
            }
        }
        else{
            for (int j= k-1; j>=0; j--){
                table[i][j] = memo[index];
                index = index+1;
            }
        }
    }
    
    for (int j=0; j<k; j++){
        for (int i=0; i<row; i++){
            printf("%c", table[i][j]);
        }
    }
    
    
    
    return 0;
}
