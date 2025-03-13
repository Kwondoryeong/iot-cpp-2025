/* */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {
	char str[100] = "banana";
	char str2[6] = "apple";		// char 배열에 저장시 +1만큼 방 필요
	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
	char str4[4];
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	str4[3] = '\0';

	printf("str : %s\n", str);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);	// 자동으로 null 들어감
	printf("str4: %s\n", str4);			// 자동으로 null 안들어감
	printf("str 나머지 방: %s\n", str[10]);

	strcpy(str, str2);					// 문자열 복사
	printf("str : %s\n", str);

	strcpy(str, "dog");
	printf("str : %s\n", str);
	
	str[0] = 'D';
	printf("str : %s\n", str);


	return 0;
}