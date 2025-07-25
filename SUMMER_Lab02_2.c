#include <stdio.h>

int main(){
    int a,b,c,d,e,temp;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    while (a!=1|| b!=2|| c!=3|| d!=4|| e!=5){
        
        if (a>b) {
        temp = a;
        a= b;
        b = temp;
        printf("%d %d %d %d %d\n", a,b,c,d,e);
        }
    
        if (b>c) {
        temp = b;
        b= c;
        c = temp;
        printf("%d %d %d %d %d\n", a,b,c,d,e);
        }
    
        if (c>d) {
        temp = c;
        c= d;
        d = temp;
        printf("%d %d %d %d %d\n", a,b,c,d,e);
        }
    
        if (d>e) {
        temp = d;
        d= e;
        e = temp;
        printf("%d %d %d %d %d\n", a,b,c,d,e);
        }
    }
   
    
    return 0;
}
