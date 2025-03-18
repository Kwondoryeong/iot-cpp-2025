/*
*   C Style   
*	���� �Ҵ���� ũ�⸦ �Է�(�迭ũ��)�ϰ� ���Ҹ� �����Ͽ� ����Ͻÿ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {
    int size;
    int* pary;  // ���� �迭 ������

    printf("���� �Ҵ���� ũ�⸦ �Է��ϼ��� > ");
    scanf("%d", &size);

    pary = (int*)malloc(size * sizeof(int));

    if (pary == NULL) {  // �޸� �Ҵ� ���� Ȯ��
        printf("�޸� �Ҵ� ����!\n");
        exit(1);
    }

    // ���� �Է�
    printf("%d�� ���Ҹ� �Է��ϼ��� > ", size);
    for (int i = 0; i < size; i++) {
        scanf(" %d", &pary[i]);
    }

    // ���� ���
    printf("�Է��� ����: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", pary[i]);
    }
    printf("\n");

    // �޸� ����
    free(pary);

    return 0;
}