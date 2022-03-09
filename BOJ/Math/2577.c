#include <stdio.h>

int main() {
	int a, b, c;
	int result[10];
	//배열값 0으로 초기화
	for (int i = 0; i < 10; i++) {
		result[i] = 0;
	}
	scanf("%d\n%d\n%d", &a, &b, &c);
	int num = a * b * c;
	for (int i = 0; num > 0; i++) {
		int j = num % 10;	//일의자리 찾기
		result[j]++;	//일의자리 개수 cnt 증가
		num /= 10;	//일의자리 제외
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", result[i]);
	}
}
