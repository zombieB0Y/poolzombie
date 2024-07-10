int ft_factorecu(int nb)
{
	int result;

	if(nb == 0)
		return 0;
	if(nb == 1)
		return nb;
	else
		result = nb * ft_factorecu(nb - 1);
	return result;
}
#include<stdio.h>
int main()
{
	printf("%d\n", ft_factorecu(5));
	return 0;
}
