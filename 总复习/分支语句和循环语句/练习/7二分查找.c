#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main7(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0, right = 9;
	int to_find;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &to_find);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < to_find){
			left = mid + 1;
		}
		else if (arr[mid]>to_find){
			right = mid - 1;
		}
		else{
			break;
		}
	}
	if (left <= right){
		printf("�ҵ���\n");
	}
	else{
		printf("û�ҵ�\n");
	}
	system("pause");
	return 0;
}