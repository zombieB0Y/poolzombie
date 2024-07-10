int ft_iterative_power(int nb, int power)
{
	int result;
	if (nb == 0 && power == 0)
		return 1;
	else if (power == 0)
		return 1;
	else if (power < 0)
		return 0;
	result = nb;
	while (power - 1 >  0)
	{
		result = nb * result;
		power--;
	}
	return result;
}
#include<stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(5,3));
	return 0;
}
