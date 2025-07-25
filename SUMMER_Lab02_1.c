#include <stdio.h>

int main(){
    int t;
    int h,w,n;
    int floor, room;
    scanf("%d", &t);
    
    for (int i=0; i<t; i++){
        scanf("%d %d %d", &h, &w, &n);
        room = n/h +1;
        floor = n%h;
        
        if (floor==0){
            floor = h;
            room = n/h;
        }
        
        printf("%d%02d\n", floor, room);
        
    }
    
    
    return 0;
}
