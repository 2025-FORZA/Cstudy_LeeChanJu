#include <stdio.h>

int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int q;
    
    if (x>0){
        if (y>0) q=1;
        else if (y<0) q=4;       
    }
    
    else if (x<0){
        if(y>0) q=2;
        else if (y<0) q=3; 
    }
    
    printf("%d", q);
       
    return 0;
}
