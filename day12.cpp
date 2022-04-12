#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//初识结构体struct
//设置结构体
struct stu {
	char name [20];
	int age;
	int score;
};

void main() {
	//结构体的创建与初始化
	struct stu s = { "张三",20,90.5 };
	//打印结构体数据
	//方式一：使用结构体名
	printf("1:%s,%d,%lf", s.name, s.age, s.score);

	struct stu* pstu = &s;
	//方式二：使用指针变量 & .运算符
	printf("%s,%d,%lf", (*pstu).name,(*pstu).age,(*pstu).score);
	//方式三：使用专门的结构体指针（只允许对结构体使用）
	printf("1:%s,%d,%lf", pstu->name,pstu->age,pstu->score);

}


