#include<stdio.h>
#include "Scroing.h"
extern int initialAmountOfChip = 500;

int main() {
	bool result = true;
	int balance = initialAmountOfChip;
	int bet = 0;
	int numofwins = numOfWins(result, 2);
	int numofloses = numOfLoses(result, 0);
	printf("Your balance: %d chips\n", balance);
	
	printf("Please select the amount of chips you'd like to bet.\n");
	scanf_s("%d", &bet);

	balance= getBalance(balance, bet);
	
	int winstreak=winStreak(false, numofwins);
	int losestreak=loseStreak(false, numofloses);
	if (result == true)
		balance = winningBalance(bet,balance);

	
	
	balance = insuranceForLose(balance, bet);
	balance = doubleDown(result,balance, bet);
	

	struct ScoreChart scores;
	scores.numOfWins = numofwins;
	scores.numOfLoses = numofloses;
	scores.winStreak = winstreak;
	scores.loseStreak = losestreak;
	printScores(scores);
	return 0;
}