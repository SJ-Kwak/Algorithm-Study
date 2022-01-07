#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char c[1000001];
	scanf("%[^\n]s", c);	// \n 나오기 전까지 모든 문자 입력
	int len = strlen(c);

	int cnt = 1;
	for (int i = 0; i < len; i++) {
		if (c[i] == ' ')
			cnt++;
	}

	if (c[0] == ' ' && cnt)
		cnt--;
	if (c[len - 1] == ' ' && cnt)
		cnt--;

	printf("%d\n", cnt);
	return 0;
}