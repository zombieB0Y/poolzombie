int ft_factorial(int nb)
{
	int result = 1;
	if (nb == 0)
		return 0;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return result;
}
#include<stdio.h>
int main()
{
	printf("%d\n", ft_factorial(5));
	return 0;
}
