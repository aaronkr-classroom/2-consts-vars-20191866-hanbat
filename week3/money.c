// money.c
#include <stdio.h>

int main(void) {
	int won;
	won = 10000000;
	printf("�� ���࿡�� %d\\ �ֽ��ϴ�.\n", won);

	//��ǥ(,) �ִ� ��
	const char* easy_won = "10,000,000"; // ???
	printf("�� ���࿡�� %s\\ �ֽ��ϴ�.\n", easy_won);

	printf("+ 500,000\\ ����~\n");
	easy_won = "10,500,000";
	printf("�����ؼ� ���� %s\\ �ֽ��ϴ�.\n", easy_won);

	//Bitcoin
	float bc = 10.123456789;
	printf("Bitcoin ���� :%fBC\n", bc); //BC

	bc += 0.34567; //10.469126789 => �ݿø�
	printf("Bitcoin ���� :%fBC\n", bc); //BC

	return 0;
	/* 16���� to 2����
		0x 7D = 0111 1101
		0x FF = 1111 1111
		0x 008E = 0000 0000 1000 1110
		0x A = 1010
		0x 1C6A = 0001 1011 0110 1010
	*/
}