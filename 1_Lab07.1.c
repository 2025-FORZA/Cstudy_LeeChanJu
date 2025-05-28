#include <stdio.h>

int main(){
    int cow[10];
    int count = 0;
    
    for (int i=0; i<10; i++) {
        cow[i] = -1;
    }
    
    int N;
    scanf("%d", &N);
    
    for (int i=0; i<N; i++){
       int number, location;
       scanf("%d %d", &number, &location);
        
       if (cow[number-1] == -1){
           cow[number-1] = location;        
       }
       else if (cow[number-1] != location ) {
           cow[number-1] = location;
           count +=1;
       }
       
    }
          
    printf("%d", count) ;       
    return 0;              
                            
      
}
