#include <stdio.h>

int main() {
	int n, num = 0;
	scanf("%d", &n);

	int min = 1000000, max = -1000000;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	printf("%d %d", min, max);
}
