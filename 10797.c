#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int date;
	scanf("%d", &date);

	int car[5];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (car[i] == date) {
			count++;
		}
	}

	printf("%d", count);
}