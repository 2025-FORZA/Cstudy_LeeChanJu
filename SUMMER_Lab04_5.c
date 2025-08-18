#include <stdio.h>
#include <string.h>

int main(){
    char n[12];
    scanf("%s", n);
    
    int len = strlen(n);
    int number[10];
    
    for (int i=0; i<len; i++){
        number[i] = n[i] - '0';
    }
    
    int space;
    for (int i=0; i<len; i++){
        for (int j=i+1; j<len; j++){
            if (number[i]<number[j]){
                space = number[i];
                number[i] = number[j];
                number[j] = space;
            } 
        }
    }
    
    for (int i=0; i<len; i++){
        printf("%d", number[i]);
    }
    
    return 0;
}
