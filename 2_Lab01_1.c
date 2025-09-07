#include <stdio.h>
#include <string.h>

int main(void) {
	char a[101];
	scanf("%s", a);
	
	for (int i=0; i<strlen(a)/2; i++){
		if(a[i] != a[strlen(a)-i-1]){
			printf("0");
			return 0;
		}// 다르면 0을 출력하고 return 0;
	}
	
	printf("1");
	// 팰린드롬이므로 1을 출력하고 return 0;
	
	return 0;
}
