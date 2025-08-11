#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int x,y,z;
    x = b / 100;
    y =( b % 100 ) / 10;
    z = ((b % 100) % 10);   
    
    int c,d,e;
    c = a * z;
    d = a * y;
    e = a * x;
    
    int f;
    f = a*b;
    
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    
    return 0;
}
