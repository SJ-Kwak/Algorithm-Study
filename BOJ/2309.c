#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[9];
	int sum = 0;
	// 입력
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);		
		sum += a[i];
	}

	// 정렬
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - a[i] - a[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					printf("%d\n", a[k]);
				}
				return 0;
			}
		}
	}

}