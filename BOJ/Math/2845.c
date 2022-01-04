#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int l, p, n[6];
	scanf("%d %d", &l, &p);
	int num = l * p;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		printf("%d ", n[i] - num);
	}
	
	return 0;
}