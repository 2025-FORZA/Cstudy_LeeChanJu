#include <stdio.h>

int main(){
    int n;
    int mylist[10];
    
    for (int i=0; i<10; i++){
        scanf("%d", &n);
        mylist[i] = n%42;
    }
    
    int result =0;
    for (int i=0; i<10; i++){
        int count =0;
        for (int j=0; j<i; j++){
            if (mylist[i] == mylist[j]){
                count++;
            }
        }
        if(count ==0){
            result++;
        }
    }
    printf("%d", result);
    
    return 0;
}
