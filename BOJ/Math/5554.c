#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
	}
	int min = sum / 60;
	int sec = sum % 60;

	printf("%d\n%d", min, sec);
	
}