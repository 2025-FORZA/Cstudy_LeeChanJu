#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int mylist[n];
    
    for (int i=0; i<n; i++){
        
        char quiz[80];
        scanf("%s", quiz);
        
        int score= 0;
        int sequence =0;
           
        for (int i=0; quiz[i] != '\0'; i++){
            if(quiz[i] == 'O'){
                sequence++;
                score += sequence;
            }
            else{
                sequence =0;
            }
        }
       
        mylist[i] = score;       
    }
    
    for (int i=0; i<n; i++){
        printf("%d\n", mylist[i]);
    }
    
    return 0;
}
