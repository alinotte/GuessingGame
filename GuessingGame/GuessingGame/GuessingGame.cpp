
#include <iostream>

int main()
{
	std::string userName;
	std::string answer;
	
	std::cout << "Hello! What's your name?\n";
	std::cin >> userName;
	std::cout << "Hi, " << userName << "! " << "Let's play a game? y/n\n";
	std::cin >> answer;
	int choices = 0;

	srand(time(0));
	int secretNumber = 1 + (rand() % 100);
	int playerChoice;

	while (true)
	{ 
	if (answer == "y")
	{
		
		std::cout << "Guess the Secret Number from 1 to 100!\n";
		std::cout << "Enter the number: \n";
		std::cin >> playerChoice;

		if (playerChoice == secretNumber)
		{
			std::cout << "Well played! You won, " << playerChoice << " is the secret number!" << std::endl;
			if (choices >= 8)
			{
			std::cout << "You could have done it faster :(\n";
			}
			std::cout << "Thank you for playing, " << userName << std::endl;
			break;
		}
		else
		{
			choices = choices + 1;
			std::cout << "Nope, " << playerChoice << " is not the right number!\n";
			if (playerChoice > secretNumber)
			{
				std::cout << "The secret number is smaller than the number you have chosen.\n";
			}
			else
			{
				std::cout << "The secret number is greater than the number you have chosen.\n" << std::endl;
			}
		}
	}
	else if (answer == "n")
	{
		std::cout << "Sadge :( \n";
		return 0;
	}
	}
}