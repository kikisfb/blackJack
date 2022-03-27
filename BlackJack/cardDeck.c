#include "cardDeck.h"
//card deck module created by Ryan Wallace
//CSCN71030-22W Project Team Based Software


int settingCards() {
	bool limitchecker = true;
	int randomarray[STANDARD_DECK] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51 };//every card in the deck out of 52
	randomGen(&randomarray);
	FILE* fp = fopen("Deck.txt", "r");//requires Deck.txt in order to run correctly
	if (!fp)
	{
		printf("No database: %s found. Load default values.\n", "Deck.txt");
		for (int i = 0; i < STANDARD_DECK; i++)
		{
			standard[i].number = i + 1;
			strcpy(standard[i].cardName, "");
		}
	}
	for (int i = 0; i < STANDARD_DECK; i++)
	{
		if (fp != NULL)
		{
			fscanf(fp, "%d", &standard[randomarray[i]].number);//reads number from a file which is the value of the card
			fscanf(fp, "%s", &standard[randomarray[i]].cardName);//reads the name of the card from the file as well
		}
	}
	if (fp != NULL)
		fclose(fp);//closes the file
	
	for (int i = 0; i < STANDARD_DECK; i++)
	{
		if (standard[i].number == 0) {
			standard[i].number = 1;
			strcpy(standard[i].cardName, "specialAce");//fixes error where one of the values was set to 0 correcting it to a value of 1 and a ace
		}
		/*printf("the value of the card is %d: \nit's name is %s:\n", standard[i].number, standard[i].cardName);*/
	}
	return 0;
}