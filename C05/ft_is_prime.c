int ft_is_prime(int nb)
{
	if(nb == 0 || nb == 1)
		return 0;
	int i = 2;
	while(i < nb / 2)
	{
		if(nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}
#include<stdio.h>
int main()
{
	printf("%d\n",ft_is_prime(997));
}
