#include "cardDeck.h"


int settingCards() {
	FILE* fp = fopen("Deck.txt", "r");
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
			fscanf(fp, "%d", &standard[i].number);
			fscanf(fp, "%s", &standard[i].cardName);
		}
	}
	if (fp != NULL)
		fclose(fp);

	for (int i = 0; i < STANDARD_DECK; i++)
	{
		printf("the value of the card is %d: \nit's name is %s:\n", standard[i].number, standard[i].cardName);
	}
}