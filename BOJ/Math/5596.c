#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int mk[4], ms[4];
	int s = 0, t = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &mk[i]);
		s += mk[i];
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &ms[i]);
		t += ms[i];
	}

	if (s >= t) {
		printf("%d", s);
	}
	else {
		printf("%d", t);
	}
}