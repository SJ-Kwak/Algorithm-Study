#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	int a, b;
	if (m < 45) {
		if (h == 0) {
			h = 23;
			m += 15;
		}
		else {
			h--;
			m += 15;
		}
	}
	else {
		m -= 45;
	}
	printf("%d %d", h, m);
}