#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//goto  关机程序
int main() {

	char input[20] = { 0 };
	system("shutdown -s -t 120");
	printf("%s", "!\n骇客入侵\n请在两分钟内输入指令：我是猪，否则电脑将会关机！\n");
begin:
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0) {
		printf("%s", "输入成功！\n你是猪！");
		system("shutdown -a");
	}
	else {
		printf("%s", "不要妄图抵抗！\n");
		goto begin;
	}

}

