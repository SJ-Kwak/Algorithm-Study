#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[6];
	int m[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", &n[i]);
		printf("%d ", m[i] - n[i]);
	}
	return 0;
}