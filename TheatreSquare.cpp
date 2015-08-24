//1A
#include <iostream>
//count the num of flagstone that  each edge need
long long CountFlagNum(long long FlagLen,long long SquLen)
{
	long long count = 0;
	if (SquLen <= FlagLen)
	{
		count = 1;
	}
	else
	{
		//ceil 
		count = (SquLen + FlagLen - 1) / FlagLen;
	}
	return count;
}

int main()
{
	long long n = 0, m = 0,a = 0,countX = 0,countY = 0;
	std::cin >> n >> m >> a;
	countX = CountFlagNum(a, n);
	countY = CountFlagNum(a, m);
	std::cout << countX*countY;
	return 0;
}