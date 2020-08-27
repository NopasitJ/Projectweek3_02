#include<stdio.h>
int Factors(long num);
int main()
{
	long triangle = 0;
	int i = 1;
	while (1)
	{
		triangle += i;
		if (Factors(triangle) > 500) //over 5 hundred
		{
			printf("%ld ", triangle);
			break;
		}
		++i;
	}
}
int Factors(long num)
{
	int count = 0;
	long factor = 1;
	while (factor * factor < num)
	{
		if (num % factor == 0)
		{
			count += 1;
		}
		factor += 1;
	}
	if (factor * factor > num)
	{
		return count * 2;
	}
	else
	{
		return count * 2 + 1;
	}
}