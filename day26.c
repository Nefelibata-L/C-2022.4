#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//goto  �ػ�С����
int main() {

	char input[20] = { 0 };
	system("shutdown -s -t 120");
	printf("%s", "��pigһ�ų���\n!\n��������\n����������������ָ�������������Խ���ػ�!������Ҫ�س���\n");
begin:
	scanf("%s", input);
	if (strcmp(input, "������") == 0) {
		printf("%s", "����ɹ���\n������");
		system("shutdown -a");
	}
	else {
		printf("%s", "��Ҫ��ͼ�ֿ���\n");
		goto begin;
	}

}

