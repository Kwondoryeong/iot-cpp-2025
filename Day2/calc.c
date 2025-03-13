#include<stdio.h>

// int calc(int, int, char);
int res = 0;
int main(void) {
	int num1, num2, result = 0;
	double result_div = 0;
	char op;
	int num_chk = 1,op_chk = 1;
	char exe_chk = "";
	/*
	printf("계산기 프로그램입니다.\n");
	printf("두개의 정수를 입력하세요.\n");
	scanf_s("%d %d", &num1, &num2);
	*/
	/*
	while (1) {
		printf("isdigit(num1) : %d, isdigit(num2) : %d", isdigit(num1), isdigit(num2));
		if (isdigit(num1) != 4 && isdigit(num2) != 4) {
			printf("두개의 정수를 입력하세요.\n");
			scanf_s("%d %d", &num1, &num2);
		}
		else
			break;
	}
	*/
	while (num_chk) {
		printf("계산기 프로그램입니다.\n");
		printf("계산하려면 'S', 종료하려면 'Q'를 눌러주세요 > ");
		
		scanf_s("%c", &exe_chk, (int unsigned)exe_chk);
		printf("%c", exe_chk);
		if (exe_chk == 'q' || exe_chk == 'Q') {
			num_chk = 0;
			break;
		}
		else if (exe_chk == 's' || exe_chk == 'S') {
			num_chk = 1;
			break;
		}
		else {
			while (1) {

			}
		}
		while (op_chk) {

			printf("두개의 정수를 입력하세요.\n");
			scanf_s("%d %d", &num1, &num2);
			printf("연산자를 입력하세요.\n");
			getchar();
			scanf_s("%c", &op, 1);
			printf("num1 : %d, num2 : %d, op : %c\n", num1, num2, op);
			if (op == '+') {
				result = add(num1, num2);
				printf("%d", result);
				op_chk = 0;
				break;
			}
			else if (op == '-') {
				result = minus(num1, num2);
				printf("%d", result);
				op_chk = 0;
				break;
			}
			else if (op == '*') {
				result = multi(num1, num2);
				printf("%d", result);
				op_chk = 0;
				break;
			}
			else if (op == '/') {
				result_div = div(num1, num2);
				printf("%lf", result_div);
				op_chk = 0;
				break;
			}
			else
				break;
		}
	}
	
	return 0;
}

int add(int num1, int num2) {
	res = num1 + num2;
	return res;
}

int minus(int num1, int num2) {
	res = num1 - num2;
	return res;
}

double div(int num1, int num2) {
	double res_div;
	res_div = (double)num1 / num2;
	return res_div;
}

int multi(int num1, int num2) {
	res = num1 * num2;
	return res;
}

/*
int calc(int num1, int num2, char op) {
	int res;
	switch (op) {
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		res = num1 / num2;
		break;
	}

	return 0;
	*/
