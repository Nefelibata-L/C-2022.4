#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
//goto  关机小程序
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	printf("%s", "《pig一号程序》\n!\n骇客入侵\n请在两分钟内输入指令：我是猪，否则电脑将会关机!（打完要回车）\n");
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
*/
/*
//函数
// 
//替换内存中的字节
int main(){
	char arr[] = { "hello world" };
	memset(arr, 'h', 5);//要替换的内存地址，要替换的内容，要替换的范围
	printf("%s", arr);
}
*/