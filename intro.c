// ó�� ���� �Ͽ��� �� ��Ʈ�� ȭ�� ����

#include <stdio.h>
#include <Windows.h>
#include "intro.h"

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	// ������ �ֿܼ��� Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void showIntro() 
{
	int x = 2;
	int y = 0;
	gotoxy(x, y + 1); printf("������������������������������������");//������ ��ǥ�� ���� ���� ������ �����϶�.
	for (int i = 2; i < 26; i++) {
		gotoxy(x, y + i); printf("��");
	}
	gotoxy(x, y + 7); printf("������������������������������������");
	//���� �׸� v1.0

	font_color(BLUE);
	gotoxy(x + 2, y + 2); printf(" �ܡ�   �ܡ� �ܡܡܡ�  �ܡ�    ��  �ܡܡܡ�  ��  �� �ܡܡ� �ܡܡ�");
	gotoxy(x + 2, y + 3); printf(" �� �� �� �� ��        �� ��   �� ��	 ��  ��   ��     ��");
	gotoxy(x + 2, y + 4); printf(" ��  ��   �� �ܡܡܡ�  ��  ��  ��  �ܡܡܡ�  ��  ��   ��     ��");
	gotoxy(x + 2, y + 5); printf(" ��  ��   �� ��        ��   �� ��         �� ��  ��   ��     ��");
	gotoxy(x + 2, y + 6); printf(" ��       �� �ܡܡܡ�  ��    �ܡ�  �ܡܡܡ�   �ܡ�  �ܡܡ�   ��");
	font_color(YELLOW);

	for (int i = 2; i <= 26; i++) {
		gotoxy(x + 68, y + i); printf("��");
	}
	gotoxy(x, y + 26); printf("�����������������������������������");

	x = 3;
	gotoxy(x, y + 10); printf("		       �ءء� �޴� ���� �ءء�");
	gotoxy(x, y + 12); printf("��  ������ : �������� ������ �����ݴϴ�.");
	gotoxy(x, y + 14); printf("��  ������ �޴� : ������ ���� ���Ÿ���� �����ݴϴ�.");
	gotoxy(x, y + 20); printf("      �����������θ޴� �̵��� �ƹ�Ű�� ��������!��������");
	gotoxy(x, y + 22); printf("��  3�� ���߱Ⱓ : 2023/09/12 ~ 2023/09/22");
	gotoxy(x, y + 24); printf("��  ������Ʈ ���ذ����� : �����, �̻���, ������");
}

void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}
	// Ŀ�� Ÿ���� ���� (win32 API)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color)
{
	// ��Ʈ�� ���� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}