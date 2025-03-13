#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    char Name[20];
    int Age;

    printf("이름을 입력하세요 : ");
    scanf_s("%s", Name, sizeof(Name));

    while (getchar() != '\n');  // 입력 버퍼 비우기

    printf("나이를 입력하세요 : ");
    scanf_s("%d", &Age);

    printf("\n");
    printf("이름 : %s\n", Name);
    printf("나이 : %d\n", Age);

    return 0;
}