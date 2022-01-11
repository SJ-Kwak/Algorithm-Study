#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	printf("%lld", n > m ? n - m : m - n);
	
}