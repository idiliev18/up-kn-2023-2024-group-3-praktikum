#include <iostream>

int main()
{
	int n;
	float arr[20];

	std::cin >> n;
	if (n > 0  && n <= 20) {
		for (int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
		}

		float min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		std::cout <<"Min  = " << min << std::endl;

		float max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		std::cout << "Max  = " << max << std::endl;

		float sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		std::cout << "Avrg   = " << sum / n << std::endl;
	}
	else 
	{
		std::cout << "Array size between 1 and 20" << std::endl;
	}
}

