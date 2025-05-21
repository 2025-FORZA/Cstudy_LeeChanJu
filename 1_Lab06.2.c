#include <stdio.h>
#include <string.h>

int main(void){
    char word[101];
    int alphabet[26];
    
    for (int i=0 ; i<26; i++){
        alphabet[i] = -1;    
    }
    
    scanf("%s", word);
    int length = strlen(word);
    
    for (int i=0; i<length; i++){
        int index = word[i]-97;
        
            if (alphabet[index]==-1) {
            
                alphabet[index] = i;
            }
    }
    
    for (int i=0; i<26; i++) {
        
        printf("%d ", alphabet[i]);
    }
    
    
    
    return 0;
}
