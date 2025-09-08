#include <stdio.h>
int main(){
    char szName[32] = {0};

    printf("이름을 입력하세요.");
    gets(szName); //gets()는 보안 결함 문제가 있다.

    printf("당신의 이름은 ");
    puts(szName);
    puts("입니다.");

    return 0;
}