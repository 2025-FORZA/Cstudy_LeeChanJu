#include <stdio.h>

int main(){
    char str[101];
    scanf("%s", str);
    
    int total =0;
    
    for (int i=0; str[i]!='\0'; i++){
        char c = str[i];
        
        if (c>= 'A' && c<= 'C') total+=3;
        else if (c>= 'D' && c<= 'F') total+=4;
        else if (c>= 'G' && c<= 'I') total+=5;
        else if (c>= 'J' && c<= 'L') total+=6;
        else if (c>= 'M' && c<= 'O') total+=7;
        else if (c>= 'P' && c<= 'S') total+=8;
        else if (c>= 'T' && c<= 'V') total+=9;
        else if (c>= 'W' && c<= 'Z') total+=10;               
    }
    
    printf("%d", total);
    
    return 0;
}
