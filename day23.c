#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//100~200֮�������
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
	}printf("\n%s %d %s", "100~200֮��������У�", num, "��");
}
*/
/*
//������
#include <stdlib.h>
#include <time.h>
int guess() {//���ò����ֺ���
	int n = 0;//����ֵ
	srand(time(NULL));
	int r = rand() % 100 + 1;//���������

	while(1) {
		printf("%s\n", "����������1~100��");//��������
		scanf("%d", &n);
		if (n > 100||n<1) {//ִ���ж�
			printf("%s\n", "���ڷ�Χ��");
		}
		else if (n > r) {
			printf("%s\n", "�´���");
		}
		else if (n < r)
		{
			printf("%s\n", "��С��");
		}
		else
		{
			printf("%s\n\n", "��ϲ�㣬�����ˣ�");
			break;
		}
	}
}
int main() {//���
	int select = 0;

	do{
		printf("%s", "����������Ϸ��\n��ѡ��\n��ʼ��Ϸ��1\n������Ϸ��0\n");//�Ƿ���Ϸ
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("%s\n", "��Ϸ��ʼ");//������Ϸ�����ò����ֺ���
			guess();
			break;
		case 0:
			printf("%s\n", "������Ϸ");//������Ϸ
			break;
		default:
			printf("%s\n", "�������");//������󣬽��������жϣ���ѭ�����½���
			break;
		}

	} while (select);//selectΪ0ʱ����ѭ������Ϊ0ִ����һ���ж�
}
*/