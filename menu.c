#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit(), system() �޼ҵ���
#include "menu.h"

// ���� �޴�
int main_menu()
{
	int menu = 0;
	printf("��ᦳ��������������������������������������������������������������������������\n");
	printf("���                                     ��\n");
	printf("��   �� ���� ������ ���� ���� ���α׷� �� ��\n");
	printf("��                                        ��\n");
	printf("������������������������������������������������������������������������������������\n");
	printf(" 1. ������ ���� ���\n");
	printf(" 2. ������ �޴�\n");
	printf(" 3. ����\n");
	//int menu;
	menu = input_only_num();
	return menu;
}

// ������ �޴�
int manager_menu()
{
	printf("1. ������ ���� ���� ��� Ȯ��");
	printf("2. �� �Ǹ� �׼� Ȯ��");
	int num;
	num = input_only_num();
	return num;
}

// ������ ���� �˻��ϴ� �޴�
int search_season_suit_menu()
{
	printf("��ᦳ������������������������������������������������\n");
	printf("���                        ��\n");
	printf("��  �� Season�� ���� ���� �� ��\n");
	printf("��                           ��\n");
	printf("����������������������������������������������������������\n");
	printf("1. �� / ���� �� ����\n");
	printf("2. ���� �� ����\n");
	printf("3. �ܿ� �� ����\n");
	printf("4. ���� �޴� ���ư���\n");
	int menu;
	menu = input_only_num();
	return menu;
}

// ���ڸ� �Է��ϰ� 
int input_only_num()
{
	int num;
	while (1) {
		//
		printf("�� �޴��� ���ڸ� �����Ͽ� �ּ���!!! ��\n");
		printf("�޴��� �������ּ��� : ");
		scanf("%d", &num);

		//printf("%d\n", num);
		//system("cls");
		while (getchar() != '\n'); // ���ڿ��� ���� �Է��ϸ� ���� �ݺ�
		if (num == 1) {
			break;
		}
		break;
	}
	return num;
}