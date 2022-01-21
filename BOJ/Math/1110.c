#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int f, s;

	if (n < 10) {
		f = n;
		s = 0;
	}
	
	int tmp = n;
	int r;
	int cnt = 0;
	while (tmp != n) {
		f = tmp / 10;
		s = tmp % 10;
		r = f + s;
		tmp = s * 10 + r;
		cnt++;
	}

	printf("%d", cnt);
}