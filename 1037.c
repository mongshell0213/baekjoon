#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 51
int arr[MAX];
int main() {
    int i; // 숫자 갯수
    int num; // 약수
    int temp;
    long long result;
    scanf("%d", &i);
    fgetc(stdin);

    for (int j = 0; j < i; j++) {
        scanf("%d", &num);
        arr[j] = num;
    }
    if (i == 1) {
        result = arr[0] * arr[0];
        printf("%lld", result);
        return 0;
    }
    for (int j = 0; j < i-1; j++) {
        for (int k = 0; k < i -1- j; k++) {
            if (arr[k] > arr[k + 1]) {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    } // 정렬 끝
    result = arr[0] * arr[i - 1];
    printf("%lld", result);
    return 0;
}