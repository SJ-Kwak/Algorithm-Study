#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[5];
	int check = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		check += n[i] * n[i];
	}

	printf("%d", check % 10);
}