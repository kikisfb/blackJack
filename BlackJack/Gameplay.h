#pragma once
#include <stdio.h>
#include <stdbool.h>

DECK* drawCard(DECK d[]);
void firstUserOptions(int);
void otherUserOptions(int);
bool exact21(int);
bool check21(int);
int result(int, int);
bool win(int);
int gameplay();
bool insure(int);