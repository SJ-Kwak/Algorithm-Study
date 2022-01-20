#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d\n%d", &n, &m);

	int a, b, c, d;
	a = n * (m % 10);
	b = n * ((m % 100) / 10);
	c = n * (m / 100);
	d = a + b * 10 + c * 100;
	printf("%d\n%d\n%d\n%d", a, b, c, d);
}