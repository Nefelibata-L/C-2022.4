#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test() {
	static int t = 0;
	t++;
	printf("%d\n", t);
};

int main() {
	//�����ؼ���
//singed�з��ŵ�  & typedef����������
	signed int num1 = 1;
	typedef signed int s_int;
	s_int num2 = 10;
	printf("%d\n", num2);

	//static���ξֲ�����
	for (int a = 0; a < 10; a++) {
		test();
	}

	//define ����
#define  max = 1000;//���峣��

#define add(a1,a2) ((a1)+(a2))//�����
	printf("%d\n", add(2, 3));//ʹ�ú�

	//�Ĵ���
	register int rint = 10;

	//ָ��
	int testz = 100;//������Ҫ��ȡ��ַ�ı���
	int* z = &testz;//ʹ��ָ�������ȡ���ַ
	printf("%p\n", z);//��ӡ��ַ
	//�����ò�������ͨ��ָ���������ŵĵ�ַ�ı������ֵ
	*z = 10;
	printf("%d\n", testz);
	printf("%d\n", sizeof(int*));//ָ��Ĵ�С��ƽ̨�й�
}