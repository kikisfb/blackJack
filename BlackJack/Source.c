#include<stdio.h>
#include "Scroing.h"
extern int initialAmountOfChip = 500;

int main() {
	bool result = true;
	int numofwins = numOfWins(result, 2);
	printf("Your balance: %d chips\n", initialAmountOfChip);
	int bet=0;
	printf("Please select the amount of chips you'd like to bet.\n");
	scanf_s("%d", &bet);
	if (bet > (initialAmountOfChip / 2)) {

	}
 
	return 0;
}