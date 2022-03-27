//random generator module created by Ryan Wallace
//CSCN71030-22W Project Team Based Software



#include "cardDeck.h"



int randomGen(int Tracker[])
{
	time_t t;
	srand((unsigned)time(&t));
	for (int x = 0; x < RANDOM; x++) {
		int randomNumbers1 = rand() % MAX_CHECKER;//generates 3 random numbers
		int randomNumbers2 = rand() % MAX_CHECKER;
		int randomNumbers3 = rand() % MAX_CHECKER;
		
		int temp, temp2;//has to temporary integers
		temp = Tracker[randomNumbers2];
		
		Tracker[randomNumbers2] = Tracker[randomNumbers1];

		
		temp2 = Tracker[randomNumbers3];
		Tracker[randomNumbers3] = temp;//switches the values of 3 random places in the array

		Tracker[randomNumbers1] = temp2;
	}
	return 0;
}