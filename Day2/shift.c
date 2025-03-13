#include <stdio.h>

int main()
{
	int res = 30;
	int n2 = 143;				// 0b 1000 1111
	res = n2 << 1;				// 0b 1 0001 1110
	printf("res : %x\n", res);
	res = n2 >> 1;				// 0b  100 0111 > 부호비트 1이므로 1로 채워져야 함 
	printf("res : %x\n", res);	// int형은 4바이트로 확인 힘듬

	/* int형 4바이트로 0000 0000 ... 부호비트 : 0 -> 0100 0111 됨  > 아래의 ch형 1바이트로 확인 */

	char ch = 0x7f;				// 0b 0111 1111
	unsigned char uch = 0x7f;
	printf("ch : %x, uch : %x, ch : %u, uch = %u\n", ch, uch, ch, uch);		// %u 부호없는 10진수
	
	char ch1 = 0x9f;			// 0b 1001 1111
	unsigned char uch1 = 0x9f;
	printf("ch1 : %x, uch1 : %x\n", ch1, uch1);

	ch1 >>= 1;					// 0b 1100 1111 부호비트 1이므로 MSB 1 채워짐
	uch1 >>= 1;					// 0b 0100 1111 부호비트 없으므로 MSB 0 채워짐
	printf("ch1 : %x, uch1 : %x\n", ch1, uch1);
	ch1 =
	
	


	return 0;
}