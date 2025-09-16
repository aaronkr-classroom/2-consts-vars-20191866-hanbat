// money.c
#include <stdio.h>

int main(void) {
	int won;
	won = 10000000;
	printf("제 은행에서 %d\\ 있습니다.\n", won);

	//쉼표(,) 있는 것
	const char* easy_won = "10,000,000"; // ???
	printf("제 은행에서 %s\\ 있습니다.\n", easy_won);

	printf("+ 500,000\\ 수금~\n");
	easy_won = "10,500,000";
	printf("수금해서 지금 %s\\ 있습니다.\n", easy_won);

	//Bitcoin
	float bc = 10.123456789;
	printf("Bitcoin 지갑 :%fBC\n", bc); //BC

	bc += 0.34567; //10.469126789 => 반올림
	printf("Bitcoin 지갑 :%fBC\n", bc); //BC

	return 0;
	/* 16진법 to 2진법
		0x 7D = 0111 1101
		0x FF = 1111 1111
		0x 008E = 0000 0000 1000 1110
		0x A = 1010
		0x 1C6A = 0001 1011 0110 1010
	*/
}