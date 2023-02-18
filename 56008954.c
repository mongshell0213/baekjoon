int main(void) {
    int i; //반복문 조건
    int j;
    int temp;
    int num1 = 0; int num2 = 0;
    int n; // 제출한 학생 번호
    int arr[28];//배열
    for (i = 0; i < 28; i++) {
        scanf("%d", &n);
        arr[i] = n;
    }
    for (i = 0; i < 27; i++) {
        for (j = 0; j < 27 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } // 정렬 끝
    for (i = 0; i < 28; i++) {
        num1++;
        if (num1 != arr[i])
            break;
    }
    num2 = num1 + 1;
    for (i; i < 28; i++) {
        if (num2 != arr[i])
            break;
        num2++;
    }
    printf("%d\n", num1);
    printf("%d\n", num2);
    return 0;
}