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
	
	winStreak(false, numofwins);
	loseStreak(false, numofloses);
	if (result == true)
		balance = winningBalance(bet,balance);

	
	
	balance = insuranceForLose(balance, bet);
	balance = doubleDownForLose(balance, bet);
	
	return 0;
}