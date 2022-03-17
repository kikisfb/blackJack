#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int winStreak(bool, int);
int loseStreak(bool, int);
int numOfLoses(bool, int);
int numOfWins(bool, int);

//struct for showing the streaks and the score chart

typedef struct ScoreChart {
	int numOfWins;
	int numOfLoses;

};




