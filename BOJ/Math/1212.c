#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[333334];
	scanf("%s", &str);
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		str[i] /= 2;
		
	}

	return 0;
}