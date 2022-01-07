#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	int n[10][5];

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &n[i][j]);
		}
	}

	for (int i = 0; i < t; i++) {
		for (int k = 0; k < 5; k++) {
			for (int m = 0; m < 5 - k; m++) {
				if (n[i][m] > n[i][m + 1]) {
					int tmp = n[i][m];
					n[i][m] = n[i][m + 1];
					n[i][m + 1] = tmp;
				}
			}
		}

		if (n[i][3] - n[i][1] >= 4) {
			printf("KIN\n");
		}
		else {
			printf("%d\n", n[i][1] + n[i][2] + n[i][3]);
		}
	}


}