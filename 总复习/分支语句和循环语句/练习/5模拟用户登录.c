#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main5() {
	int i;
	char password[20] = "";
	for (i = 0; i < 3; i++) {
		printf("���������룺");
		scanf("%s", &password);
		if (strcmp(password, "abcdef") == 0) {
			printf("������ȷ����¼�ɹ�\n");
			break;
		}
		else {
			printf("�����������������\n");
		}
	}
	if (i == 3){
		printf("��������������Σ��޷���¼");
	}
	system("pause");
	return 0;
}