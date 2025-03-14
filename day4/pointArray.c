/*
	포인터 배열 : 배열(포인터타입 저장하고 있는 배열)
	배열 포인터 : 포인터(배열을 가리키는 포인터)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char* pary[5] = { "dog", "tiger", "lion", "apple", "banana" };	// char* 5개 저장할 수 있는 포인터 배열
	char* pary2[3];
	pary[0] = "abcd";
	pary[1] = "efg";
	pary[2] = "hijk";

	return 0;
}