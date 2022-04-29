#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//º¯ÊýµÝ¹é

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


