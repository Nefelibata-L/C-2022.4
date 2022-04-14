#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//while循环
int main() {
	int a = 1;
	while (a <= 10) {
		a++;
		if (a == 4) {
			continue;//跳过本次循环
		}
		else if (a == 7) {
			break;//break:结束整个循环
		}
		printf("%s\n", "haha");
	}
*/

	//while && getchar
    //“请输入密码”
int main(){
	char password[20] = { 0 };
	printf("%s\n", "请输入密码");
	scanf("%s", password);              //输入密码
	while (getchar() != '\n') {         //清空缓存区
		;
	}
	printf("%s\n", "请确认密码(Y/N)");  
	if(getchar() == 'Y') {              //确认密码
		printf("%s\n", "确认成功");     
	}
	else if (getchar() == "N") {
		printf("确认失败");
	}
	else
		printf("%s\n", "输入错误");
}