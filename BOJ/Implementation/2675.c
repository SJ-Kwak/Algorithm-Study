#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	int r;
	char s[20];
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &r, &s);
		int len = strlen(s);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}