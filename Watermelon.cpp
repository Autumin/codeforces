//4A
#include <iostream>

int main()
{
	int input = 0;
	std::cin >> input;
	if(input <= 2)//2 is NO
		std::cout << "NO";
	else if (input % 2 == 0)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}