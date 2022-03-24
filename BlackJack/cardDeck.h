#pragma once

#define MAX_LENGTH	50
#define STANDARD_DECK	52
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

#
typedef struct cardDeck {
	int number;
	char cardName[MAX_LENGTH];
} DECK;


DECK standard[STANDARD_DECK];

int settingCards();