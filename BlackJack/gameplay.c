#include "Gameplay.h"
#include "cardDeck.h"

DECK drawCard(DECK d)
{
	settingCards();
	d[STANDARD_DECK];
	int i = 0;
	return d[i];
	i++;
}

void firstUserOptions(int input)
{

	switch (input)
	{
	case 1:
		printf("Hit selected, dealing card...\n");
		//Hit function
		break;
	case 2:
		printf("Stand selected, dealer's turn\n");
		//End user turn
		break;
	case 3:
		//Bet check
		printf("Double down selected, dealing card...");
		//Double down function
		break;
	default:
		printf("Invalid input, try again\n");
	}
}

void otherUserOptions(int input)
{
	printf("Input choice again:\n");
	printf("1: Hit (add a card)\n");
	printf("2: Stand (no more cards)\n");
	switch (input)
	{
	case 1:
		printf("Hit selected, dealing card...\n");
		//Hit function
		break;
	case 2:
		printf("Stand selected, dealer's turn\n");
		//End user turn
		break;
	default:
		printf("Invalid input, try again\n");
	}

}

bool exact21(int val)
{
	if (val == 21)
		return true;
	else
		return false;

}

bool check21(int val)
{
	if (val > 21)
	{
		return false;
	}
	else if (val <= 21)
	{
		return true;
	}
}

int result(int userVal, int dealerVal)
{
	int win = 1;
	int loss = 0;
	if (dealerVal >= userVal)
		return loss;
	if (userVal > dealerVal)
		return win;
}

bool win(int res)
{
	//0 is a loss
	if (res == 0)
		return false;
	//1 is a win
	if (res == 1)
		return true;

}

bool insure(int choice)
{
	bool result = false;

	if (choice == 1)
	{
		result = true;
	}
	if (choice == 2)
	{
		result == false
	}
	return result;
}


int gameplay()
{
	bool userAce = false;
	bool dealerAce = false;
	DECK card;
	int bet = 0;
	int dealerVal = 0;
	int userVal = 0;
	int res;
	DECK playerCard[6] = { 0 };
	DECK dealerCard[6] = { 0 };
	int card[52];
	int input = 0;
	int i = 0;
	int j = 0;

	playerCard[0] = card[0];
	playerCard[1] = card[1];
	dealerCard[0] = card[2];
	dealerCard[1] = card[3];

	printf("Your first card is: %s, with a value of %d", playerCard[0].cardName, playerCard[0].number);
	printf("Your second card is: %s, with a value of %d", playerCard[1].cardName, playerCard[1].number);
	userVal = playerCard[0].number + playerCard[1].number;
	printf("Your current score is: %d", userVal);

	printf("The dealer's face-up card is: %s, with a value of %d", dealerCard[1].cardName, dealerCard[1].number);

	if (dealerCard[1].number == 1)
	{
		int dec;
		printf("Do you want to insure? Press 1 for yes, press 2 for no.");
		scanf_s("%d", &dec);
		insure(dec);
	}
	dealerVal = dealerCard[0].number + dealerCard[1].number;

	for (i = 0; i < 1; i++)
	{
		printf("Input choice:\n");
		printf("1: Hit (add a card)\n");
		printf("2: Stand (no more cards)\n");
		printf("3: Double down (double your bet and get one more card)\n");
		scanf_s("%d", input);
		do
		{
			firstUserOptions(input);
		} while (input > 3);

		if (input == 1)
		{
			playerCard[2] = card[4];
			userVal = userVal + playerCard[2].number;
			printf("Your new value is: %d", userVal);
			if (exact21(userVal) == true)
			{
				return 1;
			}
			else if (check21(userVal) == false)
			{
				return 0;
			}
		}

		if (input == 2)
		{
			i = 1;
		}

		if (input == 3)
		{
			bet = (bet * 2);
			playerCard[2] = card[4];
			userVal = userVal + playerCard[2].number;
			printf("Your new value is: %d", userVal);
			if (exact21(userVal) == true)
			{
				return 1;
			}
			else if (check21(userVal) == false)
			{
				return 0;
			}
		}


	}

	for (i = 0; i < 3; i++)
	{
		printf("Input choice:\n");
		printf("1: Hit (add a card)\n");
		printf("2: Stand (no more cards)\n");
		scanf_s("%d", input);
		do
		{
			otherUserOptions(input);
		} while (input > 2);

		if (input == 1)
		{
			playerCard[i+3] = card[i+5];
			userVal = userVal + playerCard[i+2].number;
			printf("Your new value is: %d", userVal);
			if (exact21(userVal) == true)
			{
				return 1;
			}
			else if (check21(userVal) == false)
			{
				return 0;
			}
		}
		if (input == 2)
		{
			i = 3;
		}
	}

	for (i = 0; i > 4 && dealerVal < 17; i++)
	{
		dealerCard[i + 2] = card[i + 8];
		dealerVal = dealerVal + dealerCards[i + 1];
		printf("The new value for the dealer is: %d", dealerVal);
		if (exact21(dealerVal) == true)
		{
			return 1;
		}
		else if (check21(dealerVal) == false)
		{
			return 0;
		}
	}

	while (j; j < 7; j++)
	{
		if (playerCard[j].number == 1)
			userAce = true;
	}
	if (userAce = true)
	{
		if (userVal <= 11)
		{
			userVal = userVal + 10;
		}
	}

	while (j; j < 7; j++)
	{
		if (dealerCard[j].number == 1)
			dealerAce = true;
	}
	if (dealerAce = true)
	{
		if (dealerVal <= 11)
		{
			dealerVal = dealerVal + 10;
		}
	}
	res = result(userVal, dealerVal);
	if (res == 1)
	{
		printf("Congratsulations, you won!!!");
	}
	else if (res == 0)
	{
		printf("Sorry, you lost. Better luck next time.");
	}
	//Determine winner
	return win(res);
}