#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (a[i] == i + 1) {
			printf("ascending");
			break;
		}
			
		else if (a[i] == 8 - i) {
			printf("descending");
			break;
		}
			
		else {
			printf("mixed");
			break;
		}
			
	}
	
	return 0;
}