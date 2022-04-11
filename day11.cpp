#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test() {
	static int t = 0;
	t++;
	printf("%d\n", t);
};

int main() {
	//常见关键字
//singed有符号的  & typedef类型重命名
	signed int num1 = 1;
	typedef signed int s_int;
	s_int num2 = 10;
	printf("%d\n", num2);

	//static修饰局部变量
	for (int a = 0; a < 10; a++) {
		test();
	}

	//define 定义
#define  max = 1000;//定义常量

#define add(a1,a2) ((a1)+(a2))//定义宏
	printf("%d\n", add(2, 3));//使用宏

	//寄存器
	register int rint = 10;

	//指针
	int testz = 100;//设置需要获取地址的变量
	int* z = &testz;//使用指针变量获取其地址
	printf("%p\n", z);//打印地址
	//解引用操作符，通过指针变量所存放的地址改变变量的值
	*z = 10;
	printf("%d\n", testz);
	printf("%d\n", sizeof(int*));//指针的大小与平台有关
}