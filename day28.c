#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数的嵌套调用和链式访问
/*
//嵌套调用
//在函数中调用另一个函数
void pr1() {
	printf("%s\n","helloworld");
}
void pr2() {
	for (int i = 0; i < 5; i++) {
		pr1();
	}
}
int main() {
	pr2();
}
*/
/*
//链式访问
#include <string.h>
int main() {
	char c[] = { "helloworld" };
	printf("%lld\n", strlen(c));
}
*/
/*
#include <string.h>
int main() {
	char arr1[20] = { 0 };
	char arr2[] = { "helloworld" };
	printf("%s\n", strcpy(arr1, arr2));
	printf("%s\n", arr1);
}
*/
