#include<stdio.h>
int main() {
	int x, y, sum = 0;
	printf("ENTER NUMBER :");
	scanf_s("%d", &x);
	while (x > 0) {
		sum = sum + (x % 10);
		x = x / 10;
	}
	printf("sum = %d", sum);
	return 0;
}