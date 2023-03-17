#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int i;//전체 반복횟수
	int x1,y1, x2, y2; // 출발지, 도착지 좌표
	int j;//행성계의 수
	int x,y,r; // 행성계의 수만큼 좌표,반지름입력
	int count; //진입 이탈 횟수
	double d1, d2; // 출발점,도착점과 원의 중심 거리
	
	scanf("%d", &i);
	while (i > 0) {
		count = 0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		scanf("%d", &j);
		for (int k = 0; k < j; k++) {
			scanf("%d %d %d",&x,&y,&r);
			d1 = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
			d2 = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
			if (d1 < r && d2 < r) // case1
				continue;
			else if (d1 > r && d2 > r) // case4
				continue;
			else if (d1<r && d2>r) // case2
				count++;
			else if (d1 > r && d2 < r) // case3
				count++;
		}
		printf("%d\n", count);
		i--;
	}
	return 0;
}

