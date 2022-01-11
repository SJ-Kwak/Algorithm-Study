#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[3][6];
	int h[3], m[3], s[3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		h[i] = a[i][3] - a[i][0];
		m[i] = a[i][4] - a[i][1];
		s[i] = a[i][5] - a[i][2];

		if (s[i] < 0) {
			m[i]--;
			s[i] += 60;
		}
		if (m[i] < 0) {
			h[i]--;
			m[i] += 60;
		}
		

		printf("%d %d %d\n", h[i], m[i], s[i]);
	}
	
	
}