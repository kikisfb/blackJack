#include "cardDeck.h"
int randomGen(int Tracker[])
{
	time_t t;
	srand((unsigned)time(&t));
	for (int x = 0; x < RANDOM; x++) {
		int randomNumbers1 = rand() % 51;
		int randomNumbers2 = rand() % 51;
		int randomNumbers3 = rand() % 51;
		// Store XOR of all in a
		int temp, temp2;
		temp = Tracker[randomNumbers2];
		// After this, b has value of a
		Tracker[randomNumbers2] = Tracker[randomNumbers1];

		// After this, c has value of b
		temp2 = Tracker[randomNumbers3];
		Tracker[randomNumbers3] = temp;
		// After this, a has value of c
		Tracker[randomNumbers1] = temp2;
	}
	return 0;
}