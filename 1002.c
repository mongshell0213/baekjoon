#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int x1, y1, r1, x2, y2, r2;
	double d;
	int i;
	scanf("%d", &i);
	while (i > 0) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else if (abs(r2 - r1) < d && r1 + r2 > d)
			printf("2\n");
		else if (r1 + r2 == d || abs(r2 - r1) == d)
			printf("1\n");
		else
			printf("0\n");
		i--;
	}
	return 0;
}