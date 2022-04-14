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
/*
	//while && getchar
    //“请输入密码”
int main(){
	char password[20] = { 0 };
	printf("%s", "请输入密码:");
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
*/


//for循环
/*
int main() {
	int i = 0;
	int n = 0;
	for (i = 0; i < 3; i++) {
		for (n = 0; n < 3; n++) {
			if (n == 2) {
				break;//for循环中可以使用break && continue
				}
			printf("%s\n", "haha");
		}
	}
}*/

int main() {
	int i = 0;
	int n = 0;
	for (; i < 3; i++) {//省去了初始化部分，容易造成循环失控
		for (; n < 3; n++) {
			printf("%s\n", "haha");
			}
		}
	}

