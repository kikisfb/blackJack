#include "Scroing.h"

int winStreak(bool result, int pastWinStreak) {

	if (result == true) {
		pastWinStreak++;
	}
	else
		pastWinStreak = 0;
	return pastWinStreak;
}
int loseStreak(bool result, int pastLoseStreak) {
	if (result == false) {
		pastLoseStreak++;
	}
	else
		pastLoseStreak = 0;
	return pastLoseStreak;
}
int numOfWins(bool result, int pastNumOfWin) {
	if (result == true)
		pastNumOfWin++;
	return pastNumOfWin;
}
int numOfLoses(bool result, int pastNumOfLoses) {
	if (result == false)
		pastNumOfLoses++;
	return pastNumOfLoses;
}
