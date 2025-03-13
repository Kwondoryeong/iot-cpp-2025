#include<stdio.h>

int main(void) {
	int ary[] = { 1, 2, 3 };	
	char chary[] = { 'a', 'b', 'c' };

	printf("배열의 전체크기: %d\n", (int unsigned)sizeof(ary));
	printf("배열 방한개의 크기: %d\n", (int unsigned)sizeof(ary[0]));
	printf("배열 방의 갯수: %d\n", (int unsigned)sizeof(ary) / (int unsigned)sizeof(ary[0]));
	printf("배열 이름: %p\n", ary);						// 배열 주소값 = 배열의 첫번째방 주소
	printf("배열의 첫번째 방 주소 : %p\n", &ary[0]);
	printf("ary + 1 주소 : %p\n", ary + 1);				// 주소가 1증가 > 4byte증가
	printf("배열의 두번째 방 주소 : %p\n", &ary[1]);	// 주소의 다음방
	printf("-- 문자배열 --");
	printf("배열의 첫번째 방 주소 : %p\n", &chary[0]);	// 문자 배열 첫번째  
	printf("배열의 두번째 방 주소 : %p\n", &chary[1]);	// 문자 배열 두번째 방 > 1byte증가



	return 0;
}