#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d\n%d", &n, &m);
	printf("%d\n%d\n%d", n + m, n - m, n * m);
	return 0;
}