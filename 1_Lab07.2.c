#include <stdio.h>
#include <string.h>
int main(){
    int alphabet[26];
    for (int i=0; i<26; i++){
        alphabet[i] = 0;    
    }
    
    char word[1000001];
    scanf("%s", word);
    int len = strlen(word);
    
    for (int i=0; i <len; i++){
        char alpha = word[i];
        int index;
        if (alpha >= 'a' && alpha <= 'z') {
            index = alpha - 'a';
        }
        else if (alpha >= 'A' && alpha <= 'Z') {
            index = alpha - 'A';            
        }
        alphabet[index]++;
    }
        
    int maxnum = 0;
    int maxidx;
    int duplicate = 0;
    
    for (int i=0; i<26; i++){
        if (maxnum < alphabet[i]){
            maxnum = alphabet[i];
            maxidx = i;
            duplicate = 0;
        }
        else if (maxnum == alphabet[i]){
            duplicate = 1;
        }
    }
    if (duplicate == 1){
        printf("%c",'?');
    }
    else{
        printf("%c", maxidx + 'A');
    }
    return 0;
}
