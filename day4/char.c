#include<stdio.h>

void myStrInput(char*, int);

int main(void) {
	char str[100] = "";			 // 문자100개 저장 가능 배열
	int size = sizeof(str) / sizeof(str[0]);

	printf("문자열을 입력하세요 > ");
	myStrInput(str, size);		// 문자열을 입력받는 함수
	printf("입력한 문자열: %s\n", str);

	return 0;
}

void myStrInput(char* _str, int _size) {
	int i;
	
	for (i = 0; i < _size; i++) {
		_str[i] = getchar();
		//printf("%c", str[i]);
		if (_str[i] == '\n' || _str[i] == '\0' || i >= (_size - 1)) {
			break;
		}
		
	}
	_str[i] = '\0';
}