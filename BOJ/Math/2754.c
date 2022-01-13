#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[2];
	scanf("%c%c", &s[0], &s[1]);
	
	switch (s[0]) {
	case 'A': {
		if (s[1] == '+')
			printf("4.3");
		if (s[1] == '0')
			printf("4.0");
		if (s[1] == '-')
			printf("3.7");
		break;
	}
	case 'B': {
		if (s[1] == '+')
			printf("3.3");
		if (s[1] == '0')
			printf("3.0");
		if (s[1] == '-')
			printf("2.7");
		break;
	}
	case 'C': {
		if (s[1] == '+')
			printf("2.3");
		if (s[1] == '0')
			printf("2.0");
		if (s[1] == '-')
			printf("1.7");
		break;
	}
	case 'D': {
		if (s[1] == '+')
			printf("1.3");
		if (s[1] == '0')
			printf("1.0");
		if (s[1] == '-')
			printf("0.7");
		break;
	}
	case 'F': printf("0.0"); break;
	}
}