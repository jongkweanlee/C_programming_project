#include <stdio.h>
#include <string.h> // strcpy() ���ڿ� �� �Լ� ���
#include "file.h"
#include "suit.h"

// ������ �����ϰ� ���Ǹ� ������ �� ���Ǹ� ������ �� 
// �����ϸ� �ؽ����Ͽ��� ����� ������
// ����ڰ� ���θ޴��� ���ư��� ������ �� ���� ����


// �� ���� ��Ʈ ���� ������
void get_suit_data_spring_autumn(char springAutumnSuitFile[])
{
	// �����Ͱ� ������ "�����Ͱ� �������� �ʽ��ϴ�" ���� �޽����� ���!
	FILE* fp = fopen(springAutumnSuitFile, "r");  // ����ü ����� ���� b �ɼ�
	if (fp == NULL) {
		printf("���� �б� ����!\n");
		exit(0);
	}
	SEASON sean = { 0 }; // ���Ͼȿ� �ִ� ����ü �� ���
	int count = 1;
	int check = 0;
	while (fread(&season, sizeof(season), 1, fp) == 1) {
		printf("��� ��ȣ:%d\n", count++);
		printf("ID:%d\n", ad.id);
		printf("�̸�:%s\n", ad.name);
		printf("��ȭ:%s\n", ad.tel);
		printf("�ּ�:%s\n", ad.addr);
		printf("�̸���:%s\n", ad.email);
		printf("==========================\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}


}

void get_suit_data_summer(char summerSuitFile[])
{



}

void get_suit_data_winter(char winterSuitFile[])
{



}