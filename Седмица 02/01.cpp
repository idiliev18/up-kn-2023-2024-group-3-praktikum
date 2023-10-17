#include <iostream>

int main()
{
	char c, lastChar;
	int rep = 1;
	std::cin >> c;
	lastChar = c;

	while (rep < 5)
	{
		if (c == lastChar)
		{
			rep++;
		}
		else
		{
			rep = 0;
		}

		lastChar = c;
		std::cin >> c;

		if (rep == 2)
		{
			std::cout << "No please don't do it!" << std::endl;
		}
		else if (rep == 3)
		{
			std::cout << "Don't do this to me!" << std::endl;
		}
		else if (rep == 4)
		{
			std::cout << "This is your last chance!" << std::endl;
		}
	}

	for (int i = 0; i < 442442442; i++)
	{
		std::cout << lastChar;
	}
}

