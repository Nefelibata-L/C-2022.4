#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����

/*
//�ж��Ƿ�������
int is_leap_year(int a) {
//	return(((0 == a % 4) && (0 != a % 100)) || (0 == a % 400));
	if (((0 == a % 4) && (0 != a % 100)) || (0 == a % 400)) {
		return 1;
	}
	else {
		return 0;
	}
}
//���ú���
int main() {
	int num=0;
	for (int y = 1000; y <= 2000; y++) {
		if (1==is_leap_year(y)) {
			printf("%d\n", y);
			num++;
		}
	}
	printf("%s %d %s\n", "����",num,"������");
}
*/

/*
//���ֲ���
int binary_search(int a[], int k, int s) {
	int left = 0;
	int right = s;
	while(left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] > k) {
			right = mid - 1;
		}
		else if (a[mid] < k) {
			left = mid + 1;
		}
		else if (a[mid] == k) {
			return mid;
		}
	}return -1;
}
void main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = (sizeof(arr))/sizeof(arr[0])-1;
	int ret = binary_search(arr, key, sz);
	if (-1 != ret) {
		printf("%s %d", "�ҵ���:",ret);
	}
	else {
		printf("%s", "�Ҳ���");
	}
}
*/


