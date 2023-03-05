#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input;
	int num = 2;
	scanf("%d", &input);
	while (1) {
		if (input == 1)
			break;
		while (1) {
			if (input % num == 0) {
				printf("%d\n",num);
				input /= num;
				break;
			}
			else
				num++;
		}
	}
	return 0;
}