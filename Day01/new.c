/*
*   C Style   
*	동적 할당받을 크기를 입력(배열크기)하고 원소를 저장하여 출력하시오
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {
    int size;
    int* pary;  // 동적 배열 포인터

    printf("동적 할당받을 크기를 입력하세요 > ");
    scanf("%d", &size);

    pary = (int*)malloc(size * sizeof(int));

    if (pary == NULL) {  // 메모리 할당 실패 확인
        printf("메모리 할당 실패!\n");
        exit(1);
    }

    // 원소 입력
    printf("%d개 원소를 입력하세요 > ", size);
    for (int i = 0; i < size; i++) {
        scanf(" %d", &pary[i]);
    }

    // 원소 출력
    printf("입력한 원소: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", pary[i]);
    }
    printf("\n");

    // 메모리 해제
    free(pary);

    return 0;
}