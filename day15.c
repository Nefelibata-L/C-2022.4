#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//��׳�
	/*
	//whileѭ����n�Ľ׳�
	int n = 1;//Ŀ��n
	int num = 1;//���ڱ���0~n
	int nn = 1;//Ҫ�����n�Ľ׳�
	scanf("%d", &n);//����Ŀ��ֵ
	if (n != 0) {
		while (num <= n)
		{
			nn *= num;//nn��Ϊ��һ�����Ľ׳ˣ�ֱ����num��˱���num�Ľ׳�
			num++;
		}
		printf("%d\n", nn);
		}
	else
		printf("%s\n", "0�Ľ׳�Ϊ1");
		*/
	/*
	//forѭ����n�Ľ׳�
	int n = 1;//Ŀ��n
	int nn = 1;//����Ŀ��׳�
	scanf("%d", &n);
	if (n != 0) {
		for (int num = 1; num <= n; num++) {
			nn = num * nn;//nn��Ϊ��һ�����Ľ׳ˣ�ֱ����num��˱���num�Ľ׳�
		}printf("%d\n", nn);
	}
	else
		printf("%s\n", "0�Ľ׳�Ϊ1");
	*/
	/*
	//do while��n�Ľ׳�
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
		printf("%s\n", "0�Ľ׳�Ϊ1");
		*/

	//�׳�֮��
	/*
	//����һ
	int n = 1;//Ŀ��ֵ
	int nn = 1;//���ڼ��������е�ʱ�̽׳�
	int sum = 0;//���ڴ�Ž׳˵Ļ�
	scanf("%d", &n);
	if (n != 0) {
		for (int num = 1; num <= n; num++) {//����1��n
			nn *= num;//δ���¸�ֵ��nn�Ѿ��ǵ�ǰ���Ľ׳���(nn!)��������nn+1����˱���nn+1�Ľ׳�(nn+1!)
			sum += nn;//�������
		}printf("%d\n%d\n", nn, sum);
	}
	else printf("%s\n", "0�Ľ׳�Ϊ1");
	*/
	/*
	//������
	int n = 1;//Ŀ��ֵ
	int sum = 0;//���ڴ�Ž׳˵Ļ�
	scanf("%d", &n);
	for (int num1 = 1; num1 <= n; num1++) {
		int nn = 1;//���ڼ��������е�ʱ�̽׳�
		for (int num2 = 1; num2 <= num1; num2++) {
			nn *= num2;
		}sum += nn;
	}printf("%d\n", sum);
	*/
}

