#ifndef __SUIT_H__
#define __SUIT_H__

typedef struct _SEASON {   // ���� ���� ���� ����ü
	char springAndAutumn[10];
	char summer[10];
	char winter[10];
} SEASON;

typedef struct _SUIT {  // ���� ����ü
	char blazer[50];      //���� ����
	char dress_pants[50]; // ���� ����
	SEASON season;
} SUIT;

extern void choice_season_spring_autumn();
extern void choice_season_summer();
extern void choice_season_winter();

#endif