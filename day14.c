#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//whileѭ��
int main() {
	int a = 1;
	while (a <= 10) {
		a++;
		if (a == 4) {
			continue;//��������ѭ��
		}
		else if (a == 7) {
			break;//break:��������ѭ��
		}
		printf("%s\n", "haha");
	}
*/
/*
	//while && getchar
    //�����������롱
int main(){
	char password[20] = { 0 };
	printf("%s", "����������:");
	scanf("%s", password);              //��������
	while (getchar() != '\n') {         //��ջ�����
		;
	}
	printf("%s\n", "��ȷ������(Y/N)");  
	if(getchar() == 'Y') {              //ȷ������
		printf("%s\n", "ȷ�ϳɹ�");     
	}
	else if (getchar() == "N") {
		printf("ȷ��ʧ��");
	}
	else
		printf("%s\n", "�������");
}
*/


//forѭ��
/*
int main() {
	int i = 0;
	int n = 0;
	for (i = 0; i < 3; i++) {
		for (n = 0; n < 3; n++) {
			if (n == 2) {
				break;//forѭ���п���ʹ��break && continue
				}
			printf("%s\n", "haha");
		}
	}
}*/

int main() {
	int i = 0;
	int n = 0;
	for (; i < 3; i++) {//ʡȥ�˳�ʼ�����֣��������ѭ��ʧ��
		for (; n < 3; n++) {
			printf("%s\n", "haha");
			}
		}
	}

