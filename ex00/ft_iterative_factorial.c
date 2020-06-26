#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (a <= 0 || nb > 12)
	{
		return 0;

	while (a <= nb)
	{
		b = a*b;
		a++;
		return (b);
	}
	}
	else
	{
		return 1;
	}
}
