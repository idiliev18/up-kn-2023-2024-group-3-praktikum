#include <iostream>

int main()
{
	int n, del, res;
	std::cin >> n;

	while (n > 0)
	{
		del = n % 10;
		n /= 10;
		std::cout << del;
	}
}

