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
	if (val <= 21)
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
	int dealerVal;
	int userVal;
	int res;
	int input;
	//Hit user 2 times

	//Hit dealer 2 times (Hide 1)

	//Add up users cards

	//Add up dealers cards

	//Check if either is at 21
	if (exact21(dealerVal) == true)
		return 0;
	else if (exact21(userVal) == true)
		return 1;
	else
	//Get user input for what they want to do next
	printf("Input choice:\n");
	printf("1: Hit (add a card)\n");
	printf("2: Stand (no more cards)\n");
	printf("3: Double down (double your bet and get one more card)\n");
	scanf_s("%d", &input);
	firstUserOptions(input);
	//If hit, check total (<22)
	//dealer's turn

	//check if dealer < 17

	//If < 17, hit

	//compare user and dealer
	res = result();
	//Determine winner
	win(res);
}