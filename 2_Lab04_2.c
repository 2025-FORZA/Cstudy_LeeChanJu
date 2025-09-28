#include <stdio.h>

int main() {
	int price, money;
	int arr[7] = { 500,100,50,10,5,1 };
	int count=0;

	scanf("%d", &price);
	money = 1000 - price;

	for (int i = 0; i < 6; i++) {
		count += money / arr[i];
		money = money % arr[i];
	}

	printf("%d", count);

	return 0;
}
