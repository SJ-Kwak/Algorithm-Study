#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (90 <= n && n <= 100)
		printf("A");
	else if (80 <= n && n < 90)
		printf("B");
	else if (70 <= n && n < 80)
		printf("C");
	else if (60 <= n && n < 70)
		printf("D");
	else
		printf("F");
}