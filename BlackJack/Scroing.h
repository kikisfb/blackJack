#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int winStreak(bool, int);
int loseStreak(bool, int);
int numOfLoses(bool, int);
int numOfWins(bool, int);
int getBalance(int, int);
int winningBalance(int, int);
int doubleDown(bool, int, int);
int insuranceForLose(int, int);
void printScores(struct ScoreChart);

//struct for showing the streaks and the score chart

typedef struct ScoreChart {
	int numOfWins;
	int numOfLoses;
	int winStreak;
	int loseStreak;
};




