#include <iostream>

int main()
{
	char operation;
	int op1, op2;

	do {
		std::cin >> operation;
		std::cin >> op1;
		std::cin >> op2;

		switch (operation)
		{
		case '+': {
			std::cout << "= " << op1 + op2;
			break;
		}
		case '-': {
			std::cout << "= " << op1 - op2;
			break;
		}
		case '*': {
			std::cout << "= " << op1 * op2;
			break;
		}
		case '/': {
			std::cout << "= " << op1 / op2;
			break;
		}
		}

		std::cout << std::endl;

	} while (!(operation == '/' && op2 == 0));
}

