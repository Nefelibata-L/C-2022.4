#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//求阶乘
	/*
	//while循环求n的阶乘
	int n = 1;//目标n
	int num = 1;//用于遍历0~n
	int nn = 1;//要计算的n的阶乘
	scanf("%d", &n);//输入目标值
	if (n != 0) {
		while (num <= n)
		{
			nn *= num;//nn作为上一个数的阶乘，直接与num相乘便是num的阶乘
			num++;
		}
		printf("%d\n", nn);
		}
	else
		printf("%s\n", "0的阶乘为1");
		*/
	/*
	//for循环求n的阶乘
	int n = 1;//目标n
	int nn = 1;//接收目标阶乘
	scanf("%d", &n);
	if (n != 0) {
		for (int num = 1; num <= n; num++) {
			nn = num * nn;//nn作为上一个数的阶乘，直接与num相乘便是num的阶乘
		}printf("%d\n", nn);
	}
	else
		printf("%s\n", "0的阶乘为1");
	*/
	/*
	//do while求n的阶乘
	int n = 1;
	int nn = 1;
	int num = 1;
	scanf("%d",&n);
	if (n != 0) {
		do {
			nn = nn * num;
			num++;
		} while (num <= n);
		printf("%d\n", nn);
	}
	else
		printf("%s\n", "0的阶乘为1");
		*/

	//阶乘之和
	/*
	//方法一
	int n = 1;//目标值
	int nn = 1;//用于计算运行中的时刻阶乘
	int sum = 0;//用于存放阶乘的积
	scanf("%d", &n);
	if (n != 0) {
		for (int num = 1; num <= n; num++) {//遍历1至n
			nn *= num;//未重新赋值的nn已经是当前数的阶乘了(nn!)，将其与nn+1数相乘便是nn+1的阶乘(nn+1!)
			sum += nn;//将其相加
		}printf("%d\n%d\n", nn, sum);
	}
	else printf("%s\n", "0的阶乘为1");
	*/
	/*
	//方法二
	int n = 1;//目标值
	int sum = 0;//用于存放阶乘的积
	scanf("%d", &n);
	for (int num1 = 1; num1 <= n; num1++) {
		int nn = 1;//用于计算运行中的时刻阶乘
		for (int num2 = 1; num2 <= num1; num2++) {
			nn *= num2;
		}sum += nn;
	}printf("%d\n", sum);
	*/
}

