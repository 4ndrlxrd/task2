#include <stdio.h>
#include <iostream>

int main()
{
	int a, b;
	printf("a=");
	std::cin >>a ;
	printf("b=");
	std::cin >> b;
	if (a > b)
	{
		printf("A bolshe");
	}
	else if (b > a)
	{
		printf("B bolshe");
	}
	else
	{
		printf("A = B");
	}
	return 0;
}
