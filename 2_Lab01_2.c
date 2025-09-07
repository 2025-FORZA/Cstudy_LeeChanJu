#include <stdio.h>
#include <string.h>


int main(void) {
	char sentence[1000001];
	scanf("%[^\n]", sentence);
	
	int number = 1;
	
	for (int i=0; i<strlen(sentence); i++){
		if (sentence[i] == ' '){
			number++;
		}
	}
	
	if (sentence[0] == ' '){
		number--;
	}
    
    if (sentence[strlen(sentence)-1] == ' '){
        number--;
    }
	
	printf("%d", number);

	return 0;
}
