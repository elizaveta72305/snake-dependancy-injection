
#include "Header1.h"

int main()
{
	int choice;
	while (1)
	{
		greetings(&choice);
		switch (choice)
		{

		case 1: gameRules();
			break;

		case 2: playGame();
			break;

		case 3: exitOur();
			break;

		default: printf("Invalid choice");

		}
	}
	return 0;
}










