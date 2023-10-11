#include <iostream>

int main()
{
    int num;
    std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			// first and last line
			if (i == 0 || i == num - 1) 
			{
				std::cout << num;
			}

			// left and right borders
			else if (j == 0 || j == num-1) {
				std::cout << num;
			}

			// empty spaces
			else 
			{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
}