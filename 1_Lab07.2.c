#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    scanf("%d", &num);
    
    int(*people)[2] = malloc(sizeof(int)*2*num);
    if (people == NULL) {
        return 1;
    }
    
    for (int i=0; i<num; i++){
        scanf("%d %d", &people[i][0], &people[i][1]);
        
    }
    
    int ranklist[num];
    for (int i=0; i<num; i++){
        ranklist[i] = 0;
    }
    
    for (int i=0; i<num; i++){
        int rank = 1;
        
        for (int j=0; j<num; j++){
            if (i==j){
                continue;
            }
            if (people[j][0] > people[i][0] && people[j][1] > people[i][1]){
                rank++;
            }
        }
        
        ranklist[i] += rank;
    }
    
    for (int i=0; i<num; i++){
        printf("%d ", ranklist[i]);
    }
    
    free(people);
    
    return 0;
    
}
