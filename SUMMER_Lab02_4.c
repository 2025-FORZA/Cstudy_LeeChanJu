#include <stdio.h>

int main(){
    char str[101];
    scanf("%s", str);
    
    int count =0;
    for (int i=0; str[i] != '\0'; i++){
        
        if (str[i]=='c'){
            if (str[i+1] == '=' || str[i+1] == '-'){
                i+=1;               
            }
        }
        
        else if (str[i] == 'd'){
            if (str[i+1]=='z' && str[i+2] == '='){
                i+=2;               
            }    
            else if (str[i+1] == '-'){
                i+=1;
            }           
        }
        
        else if (str[i] == 'l'){
            if (str[i+1] == 'j'){
                i+=1;
            }
        }
        
        else if (str[i] == 'n'){
            if (str[i+1] == 'j'){
                i+=1;
            }
        }
        
        else if (str[i] == 's'){
            if (str[i+1] == '='){
                i+=1;
            }
        }
        
         else if (str[i] == 'z'){
            if (str[i+1] == '='){
                i+=1;
            }
        }
        count +=1;
        
    }
    
    printf("%d", count);
    return 0;
}
