#include "Scroing.h"

int winStreak(bool result, int pastWinStreak) {

	if (result == true) {
		pastWinStreak++;
	}
	else
		pastWinStreak = 0;
	printf("Win streak: %d\n", pastWinStreak);
	return pastWinStreak;
}
int loseStreak(bool result, int pastLoseStreak) {
	if (result == false) {
		pastLoseStreak++;
	}
	else
		pastLoseStreak = 0;
	printf("Lose streak: %d\n", pastLoseStreak);
	return pastLoseStreak;
}
int numOfWins(bool result, int pastNumOfWin) {
	if (result == true)
		pastNumOfWin++;
	printf("Number of wins: %d\n", pastNumOfWin);
	return pastNumOfWin;
}
int numOfLoses(bool result, int pastNumOfLoses) {
	if (result == false)
		pastNumOfLoses++;
	printf("Number of loses: %d\n", pastNumOfLoses);
	return pastNumOfLoses;
}


int getBalance(int pastBalance, int bet) {
	int newBalance;
	if (bet > pastBalance) {
		printf("Your bet is too high\nPlease select your bet less than half of the amount of your balance!\n");
	}
	else {
		newBalance = pastBalance - bet;
		printf("your new balance is %d\n", newBalance);
	}
	return newBalance;
}
int winningBalance( int bet, int pastBalance) {
	
	pastBalance = pastBalance + (bet * 2);
	printf("Your new balance after winning: %d\n", pastBalance);
	return pastBalance;
}
int doubleDown(bool result, int balance, int bet) {
	if (result == true){
		balance = balance + (bet * 4);
		printf("Your new balance after double down: %d\n", balance);
	}
	else {
		balance = getBalance(balance, bet);//doing the get balance again make the balance go down twice
		printf("Your new balance after double down: %d\n", balance);	
	}
	return balance;
}
int insurance(bool result, int balance, int bet) {
	if (result == true) {
		balance = winningBalance(bet, balance);
	}
	else {
		balance = balance + (bet / 2);
		printf("Your new balance after losing: %d\n", balance);
	}
	
	return balance;
}
void printScores(struct ScoreChart sc) {
	printf(" ________________________________\n");
	printf("|Number of wins           %d     |\n",sc.numOfWins);
	printf("|Number of Loses          %d     |\n", sc.numOfLoses);
	printf("|Win Streak               %d     |\n", sc.winStreak);
	printf("|lose Streak              %d     |\n", sc.loseStreak);
	printf(" ________________________________\n");

}