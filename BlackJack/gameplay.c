#include <stdio.h>
#include <stdbool.h>


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

bool exact21(val)
{
	if (val == 21)
		return true;
	else
		return false;

}

bool check21(val)
{
	if (val < 21)
		return true;
	if (val > 21)
		return false;
}

int dealerTurn(int dealerVal)
{
	while (dealerVal < 17)
	{
		//Hit function for dealer
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


int gameplay()
{
	int bet;
	int dealerVal;
	int userVal;
	int res;
	int playerCard[6] = { 0 };
	int dealerCards[6] = { 0 };
	int card[52];
	int input;
	int i = 0;

	playerCard[0] = card[0];
	playerCard[1] = card[1];
	dealerCards[0] = card[2];
	dealerCards[1] = card[3];

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
			playerCard[i + 2] = card[i + 4];
			userVal = userVal + playerCard[i + 2];
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
			playerCard[i + 2] = card[i + 4];
			userVal = userVal + playerCard[i + 2];
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
			playerCard[i + 2] = card[i + 4];
			userVal = userVal + playerCard[i + 2];
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
		dealerCards[i + 2] = card[i + 7];
		dealerVal = dealerVal + dealerCards[i + 2];
		if (exact21(dealerVal) == true)
		{
			return 1;
		}
		else if (check21(dealerVal) == false)
		{
			return 0;
		}
	}


	res = result(userVal, dealerVal);
	//Determine winner
	return win(res);
}