// ���� ���� ����(������)�� �ֹ��ϴ� ���α׷� (����, ����)

#include <stdio.h>
#include <Windows.h> // win32 api ��� (������ ȯ�濡���� ��� ����)
#include <conio.h>  // _getch �Լ� ��� 
#include <stdlib.h>	// exit()
#include "intro.h" 
#include "menu.h"

void main()
{
	int num = 0;
	//�ܼ�â ũ�� ����.
	system("mode con cols=75 lines=29");
	
	// ��Ʈ�� 
	// ���� : ���ο� ���� ���屸�� ��(���θ� �ΰ�)
	set_cursor_type(NOCURSOR);
	font_color(YELLOW);
	//showIntro();
	//_getch();

	system("cls");
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	
	//num = main_menu();
	//printf("%d\n", num);

	while (1) {
		// ���� �޴�
		num = main_menu();
		switch (num) {
		case FIRST_NUM:  // ������ ���� ��� ������ �� �ְ�
			search_season_suit_menu();
			break;
		case SECOND_NUM:  // ������ �޴�
			manager_menu();
			break;
		case THIRD_NUM:  // ���α׷� ����
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
			system("pause");
		}
		system("cls");
	}
}