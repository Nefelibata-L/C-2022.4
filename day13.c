#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//�����ֵ
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



//�ж��Ƿ������������Yes|No
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
//��֧���if else
void main() {
	int age = 800;
	if (age < 18) {
		printf("%s,\n", "δ����");
		//	}else if (age >= 18 < 26) {
		//�߼��жϴ��󣬳����ȼ���ǰ�벿�֣����õó��Ľ��1���棩��26�Աȣ��ó��������н��
		//��ȷ���ʽ��
	}
	else if (age >= 18 && age <= 30) {
		printf("%s\n", "����");
	}
	else if (age >= 30 && age < 60) {
		printf("%s\n", "������");
	}
	else if (age >= 60 && age < 150) {
		printf("%s\n", "������");
	}
	else printf("%s\n", "������");

	//�õĴ�����
	//�������󣬷�ֹ���bug
	int b = 10;
	//if(b=100){ ������
	if (100 == b) {
		printf("%s\n", "hehe");
	}
	else printf("%s\n", "haha");

	//���1~100֮�������
	for (int odd = 1; odd <= 100; odd++) {
		if (0 != odd % 2) {
			printf("%d\n", odd);
		}
	}
}
*/

/*
//��֧���switch
//�������ֵ�ж����ڼ�
void Week1() {
	int c = 0;
	scanf("%d", &c);
	if (1 <= c && 7 >= c) {
		switch (c) {//���α��ʽ�б��������������
		case 1://���ͳ������ʽҲ����������γ���
			//Ҳ���Է����ַ�����Ϊ������ȡ�����ַ���ASCLL��ֵ
			printf("%s\n", "����һ");
			break;
		case 2:
			printf("%s\n", "���ڶ�");
			break;
		case 3:
			printf("%s\n", "������");
			break;
		case 4:
			printf("%s\n", "������");
			break;
		case 5:
			printf("%s\n", "������");
			break;
		case 6:
			printf("%s\n", "������");
			break;
		case 7:
			printf("%s\n", "������");
			break;
		}
	}
	else printf("%s \n", "���ڷ�Χ��");
	return 0;
}
//�ı�����
void Week2() {
	int c1 = 0;
	scanf("%d", &c1);
	//c�����п�ʹ��default���ų���Χ������
	//if (1 <= c1 && 7 >= c1) {//ʡȥ�ж����
		switch (c1) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("%s\n", "������");
			break;
		case 6:
		case 7:
			printf("%s\n", "��Ϣ��");
			break;
		default://default��λ��Ҫ�󣬷������󼴿�
			printf("%s\n", "���ڷ�Χ��");
			break;
		}
	//}
	//else printf("%s \n", "���ڷ�Χ��");
	return 0;
}

//���÷���
int main() {
	Week2();
}
*/