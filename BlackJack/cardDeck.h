#pragma once
//card deck header created by Ryan Wallace



#define RANDOM	80
#define MAX_LENGTH	50
#define STANDARD_DECK	52
#define MAX_CHECKER	51
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

#
typedef struct cardDeck {// structure for cardDeck function number is the value of the card given and cardName is the name of the card
	int number;
	char cardName[MAX_LENGTH];
} DECK;


DECK standard[STANDARD_DECK]; // global array to set the card deck array in multiple source files
int randomGen(int* a);
int settingCards();