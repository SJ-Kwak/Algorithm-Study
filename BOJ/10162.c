#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 300, b = 60, c = 10;
	int t;
	scanf("%d", &t);
	if (t % c != 0) {
		printf("-1");
	}
	else {
		int A = t / a;
		int B = (t % a) / b;
		int C = (t % b) / c;

		printf("%d %d %d", A, B, C);
	}
}