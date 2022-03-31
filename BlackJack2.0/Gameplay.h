#pragma once
#include <stdio.h>
#include <stdbool.h>
#include"cardDeck.h"
#define MAX_NAME 25

typedef struct card
{
	int value;
	char cardName[MAX_NAME];
}CARD;
CARD* drawCard(DECK);
void firstUserOptions(int);
void otherUserOptions(int);
bool exact21(int);
bool check21(int);
int result(int, int);
bool win(int);
int gameplay();
bool insure(int);
bool doubleDownAns(int);