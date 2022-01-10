#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[1000000];
	scanf("%s", &s);

	int alp[26];
	for (int i = 0; i < 26; i++) {
		alp[i] = 'A' + i;
	}

	int cnt[26] = { 0, };
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == alp[j] || s[i] == alp[j] + 32)
				cnt[j]++;
		}
	}

	int max = 0, maxIdx = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			maxIdx = i;
		}
		
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == max && max != 0) {
			printf("?");
			return 0;
		}
	}

	printf("%c", alp[maxIdx]);

}