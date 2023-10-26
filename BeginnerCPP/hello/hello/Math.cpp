#include <iostream>
#include "Log.h"

static int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

void recursivecountdown(int n)
{
	if (n < 0)
		return;
	
	std::cout << n << " ";
	recursivecountdown(n - 1);
}

int main()
{
	recursivecountdown(10);
	std::cin.get();
}
