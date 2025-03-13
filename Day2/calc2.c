#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 사칙연산 함수 선언
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b != 0) return a / b;
    else {
        printf("오류: 0으로 나눌 수 없습니다.\n");
        return 0;
    }
}

void calculator() {
    float num1, num2, result;
    char op;

    while (1) {
        // 사용자 입력 받기
        printf("첫 번째 숫자를 입력하세요 (q 입력 시 종료): ");
        if (scanf("%f", &num1) != 1) {
            char exit_check;
            while (getchar() != '\n'); // 버퍼 비우기
            scanf(" %c", &exit_check);
            if (exit_check == 'q' || exit_check == 'Q') {
                printf("계산기를 종료합니다.\n");
                break;
            }
            else {
                printf("오류: 유효한 숫자를 입력하세요.\n");
                while (getchar() != '\n'); // 버퍼 비우기
                continue;
            }
        }

        printf("두 번째 숫자를 입력하세요: ");
        if (scanf("%f", &num2) != 1) {
            printf("오류: 유효한 숫자를 입력하세요.\n");
            while (getchar() != '\n'); // 버퍼 비우기
            continue;
        }

        printf("연산자를 입력하세요 (+, -, *, /, q 종료): ");
        scanf("%c", &op);
        if (op == 'q' || op == 'Q') {
            printf("계산기를 종료합니다.\n");
            break;
        }

        // 연산 수행
        switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("오류: 올바른 연산자를 입력하세요.\n");
            continue;
        }

        // 결과 출력
        printf("결과: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
    }
}

int main() {
    calculator();
    return 0;
}
