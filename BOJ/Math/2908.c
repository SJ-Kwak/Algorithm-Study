#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	a = a / 100 + ((a / 10) % 10) * 10 + ((a % 100) % 10) * 100;
	b = b / 100 + ((b / 10) % 10) * 10 + ((b % 100) % 10) * 100;
	
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);

	return 0;
}