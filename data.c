#include <stdio.h>
#include "menu.h"
#include "file.h"

// ������ �������� �����Ͽ��� �� �����͸� ����ϵ���  
void choice_suit_season() 
{
	while (1) {
		int num = search_season_suit_menu();
		switch (num) {
		case FIRST_NUM: {
			// ���Ͽ��� �ҷ��� ������(��, ������ ����)�� �����ش�. 
			char springAutumnSuitFile[] = "spring_autumn_suit.txt"; 
			get_suit_data_spring_autumn(springAutumnSuitFile);



			break;
		}
		case SECOND_NUM: {
			// ���Ͽ��� �ҷ��� ������(������ ����)�� �����ش�. 
			char summerSuitFile[] = "summer_suit.txt";
			get_suit_data_summer(summerSuitFile);



			break;
		}
		case THIRD_NUM: {

			// ���Ͽ��� �ҷ��� ������(�ܿ�� ����)�� �����ش�. 
			char winterSuitFile[] = "winter_suit.txt";
			get_suit_data_winter(winterSuitFile);


			break;
		}

		case FOURTH_NUM:
			// ���� �޴��� ���ư���.

			break; 




		default:
			printf("�߸��� �޴� ����!!\n");
		}




	}
}