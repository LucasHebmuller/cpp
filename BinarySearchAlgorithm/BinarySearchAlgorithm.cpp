#include <iostream>
#include <cstdlib>   // srand and rand functions
#include <ctime>     // time function to set different seeds and different random numbers


void player();
void computer();


int main()
{
	srand((unsigned)time(nullptr));

	char option;

	do
	{
		std::cout << "Would you like to (p)play or watch the (c)computer play? ";
		std::cin >> option;

		if (option != 'c' && option != 'p')
			std::cout << "Please, type a valid option ('c' or 'p')." << std::endl;

	} while (option != 'c' && option != 'p');
	 
	if ( option == 'c' )
		computer();
	if (option == 'p')
		player();

	
	bool loop = true;

	while (loop)
	{
		char choice;

		std::cout << "Would you like to play again ( yes 'y' or no 'n')?";
		std::cin >> choice;

		if (choice != 'y' && choice != 'n')
			std::cout << "Please enter a valid choice." << std::endl;
		else if ( choice == 'n' )
			loop = false;
		else
		{
			do
			{
				std::cout << "Would you like to (p)play or watch the (c)computer play? ";
				std::cin >> option;

				if (option != 'c' && option != 'p')
					std::cout << "Please, type a valid option ('c' or 'p')." << std::endl;

			} while (option != 'c' && option != 'p');

			if (option == 'c')
				computer();
			if (option == 'p')
				player();
		}
	}


	return 0;
}


void player()
{
	int random = 100 + (rand() % (200 - 100 + 1));
	bool found = false;

	while ( !found )
	{
		int guess;

		std::cout << "Enter your guess between 100 and 200: ";
		std::cin >> guess;

		if (guess > 200 || guess < 100)
			std::cout << "Please, type a valid option (100 to 200)." << std::endl;
		else if (guess > random)
			std::cout << "Your answer is too high, try again." << std::endl;
		else if (guess < random)
			std::cout << "Your answer is too low, try again." << std::endl;
		else
			found = true;
	}

	std::cout << "Congratulations! You found the right number!" << std::endl;
}


void computer()
{
	int random = 100 + (rand() % (200 - 100 + 1));
	bool found = false;
	int highest = 200, lowest = 100;

	while ( lowest <= highest && !found )
	{
		int guess = (highest + lowest) / 2;

		std::cout << guess << std::endl;

		if (guess > random)
		{
			std::cout << "Your answer is too high, try again." << std::endl;
			highest = guess - 1; // avoid boundary erros
		}
		else if (guess < random)
		{
			std::cout << "Your answer is too low, try again." << std::endl;
			lowest = guess + 1;  // avoid boundary erros
		}
		else
			found = true;
	}

	std::cout << "Congratulations! You found the right number!" << std::endl;
}