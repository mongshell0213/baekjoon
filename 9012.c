#include <stdio.h>

char arr[60];
char stack[60];
void init(char arr[]){
    int i;
    for(i=0;i<sizeof(arr)/sizeof(char)+1;i++){
        arr[i]='\0';
    }
}
main(void) {
    int i;//반복문
    int j;
    int n;//반복 횟수
    int idx;//가장 마지막 데이터값 위치
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        idx = 0;
        init(arr);
        init(stack);
        scanf("%s", arr);
        for (j = 0; j < strlen(arr); j++) {
            if (arr[j] == '(') {
                stack[idx] = '(';
                idx++;
            }
            else if(arr[j] == ')'){
                if(idx==0){
                    idx++;
                    break;
                }
                else{
                    idx--;
                    stack[idx]='\0';
                }
            }
        }
        if (idx==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}