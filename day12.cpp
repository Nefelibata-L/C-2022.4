#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ʶ�ṹ��struct
//���ýṹ��
struct stu {
	char name [20];
	int age;
	int score;
};

void main() {
	//�ṹ��Ĵ������ʼ��
	struct stu s = { "����",20,90.5 };
	//��ӡ�ṹ������
	//��ʽһ��ʹ�ýṹ����
	printf("1:%s,%d,%lf", s.name, s.age, s.score);

	struct stu* pstu = &s;
	//��ʽ����ʹ��ָ����� & .�����
	printf("%s,%d,%lf", (*pstu).name,(*pstu).age,(*pstu).score);
	//��ʽ����ʹ��ר�ŵĽṹ��ָ�루ֻ����Խṹ��ʹ�ã�
	printf("1:%s,%d,%lf", pstu->name,pstu->age,pstu->score);

}


