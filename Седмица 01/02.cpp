#include <iostream>

int main()
{
	int num = 6;


	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			
			if (j == 1 || j == i || i == num)
			{
				std::cout << num;
			}
			else
			{
				std::cout << " ";
			}

		}

		std::cout << std::endl;
	}
}

