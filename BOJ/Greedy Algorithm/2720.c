#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int c;
	int q = 0, d = 0, n = 0, p = 0;
	for (int i = 0; i < t; i++) {
		scanf("%d", &c);
		q = c / 25;
		c -= 25 * q;
		d = c / 10;
		c -= d * 10;
		n = c / 5;
		c -= n * 5;
		p = c;

		printf("%d %d %d %d\n", q, d, n, p);
	}	
}