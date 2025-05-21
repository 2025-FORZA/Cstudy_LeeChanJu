#include <stdio.h>

int main(){
    int n,count =0 ;
    char numbers[101];
    
    scanf("%d", &n );
    scanf("%s", numbers);

    for (int i=0 ; i<n ; i++) {
        count += numbers[i]-'0';
    }
    printf("%d", count);
    return 0;
    
}
