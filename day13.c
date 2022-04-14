#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//求最大值
int Max(int a, int b) {
	if (a > b)
		return a;
	else 
		return b;
}

int main() {
	int x=0;
	int y=0;
	int m=0;
	scanf("%d %d", &x, &y);
	m=Max(x,y);
	printf("%d\n", m);
}*/



//判断是否被五整除，输出Yes|No
/*
int main() {
	int i = 0;
	scanf("%d", &i);
	if (i % 5 == 0) {
		printf("%s\n", "Yes\0");
	}
	else
		printf("%s\n", "No\0");
}
*/

/*
//分支语句if else
void main() {
	int age = 800;
	if (age < 18) {
		printf("%s,\n", "未成年");
		//	}else if (age >= 18 < 26) {
		//逻辑判断错误，程序先计算前半部分，再用得出的结果1（真）与26对比，得出错误运行结果
		//正确表达式：
	}
	else if (age >= 18 && age <= 30) {
		printf("%s\n", "青年");
	}
	else if (age >= 30 && age < 60) {
		printf("%s\n", "中年人");
	}
	else if (age >= 60 && age < 150) {
		printf("%s\n", "老年人");
	}
	else printf("%s\n", "？？？");

	//好的代码风格
	//常量在左，防止语句bug
	int b = 10;
	//if(b=100){ 不报错
	if (100 == b) {
		printf("%s\n", "hehe");
	}
	else printf("%s\n", "haha");

	//输出1~100之间的奇数
	for (int odd = 1; odd <= 100; odd++) {
		if (0 != odd % 2) {
			printf("%d\n", odd);
		}
	}
}
*/

/*
//分支语句switch
//根据输出值判断星期几
void Week1() {
	int c = 0;
	scanf("%d", &c);
	if (1 <= c && 7 >= c) {
		switch (c) {//整形表达式中必须放入整形数据
		case 1://整型常量表达式也必须放入整形常量
			//也可以放入字符，因为编译器取的是字符的ASCLL码值
			printf("%s\n", "星期一");
			break;
		case 2:
			printf("%s\n", "星期二");
			break;
		case 3:
			printf("%s\n", "星期三");
			break;
		case 4:
			printf("%s\n", "星期四");
			break;
		case 5:
			printf("%s\n", "星期五");
			break;
		case 6:
			printf("%s\n", "星期六");
			break;
		case 7:
			printf("%s\n", "星期日");
			break;
		}
	}
	else printf("%s \n", "不在范围内");
	return 0;
}
//改变需求
void Week2() {
	int c1 = 0;
	scanf("%d", &c1);
	//c语言中可使用default来排除范围外的输出
	//if (1 <= c1 && 7 >= c1) {//省去判断语句
		switch (c1) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("%s\n", "工作日");
			break;
		case 6:
		case 7:
			printf("%s\n", "休息日");
			break;
		default://default无位置要求，符合需求即可
			printf("%s\n", "不在范围内");
			break;
		}
	//}
	//else printf("%s \n", "不在范围内");
	return 0;
}

//调用方法
int main() {
	Week2();
}
*/