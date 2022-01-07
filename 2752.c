#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[3];
	int tmp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (a[j] > a[j + 1]) {
				//swap a[i] <=> a[i+1]
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

			}
		}
		
	}

	for (int i = 0; i < 3; i++)
		printf("%d ", a[i]);
	return 0;
}