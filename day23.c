#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//100~200之间的素数
int main(){
	int num = 0;
	for (int i = 100; i <= 200; i++) {
		int n = 1;
		for (int ii = 2; ii < i; ii++) {
			if (i % ii == 0) {
				n = 0;
				break;
			}
		}
		if (n == 1) {
			printf("%d/n", i);
			num++;
		}
	}printf("\n%s %d %s", "100~200之间的素数有：", num, "个");
}
*/
/*
//猜数字
#include <stdlib.h>
#include <time.h>
int guess() {//设置猜数字函数
	int n = 0;//输入值
	srand(time(NULL));
	int r = rand() % 100 + 1;//产生随机数

	while(1) {
		printf("%s\n", "请输入数字1~100：");//输入数字
		scanf("%d", &n);
		if (n > 100||n<1) {//执行判断
			printf("%s\n", "不在范围内");
		}
		else if (n > r) {
			printf("%s\n", "猜大了");
		}
		else if (n < r)
		{
			printf("%s\n", "猜小了");
		}
		else
		{
			printf("%s\n\n", "恭喜你，猜中了！");
			break;
		}
	}
}
int main() {//入口
	int select = 0;

	do{
		printf("%s", "《猜数字游戏》\n请选择\n开始游戏：1\n结束游戏：0\n");//是否游戏
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("%s\n", "游戏开始");//进入游戏，调用猜数字函数
			guess();
			break;
		case 0:
			printf("%s\n", "结束游戏");//结束游戏
			break;
		default:
			printf("%s\n", "输入错误");//输入错误，结束本次判断，外循环重新进入
			break;
		}

	} while (select);//select为0时结束循环，不为0执行下一次判断
}
*/