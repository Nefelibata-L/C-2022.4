#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����ݹ�

void print(unsigned int i) {
	if (i > 10) {
		print(i / 10);
	}
	printf("%d\n", i % 10);


}

int main() {

	unsigned int num = 0;
	scanf("%u", &num);
	print(num);


}


