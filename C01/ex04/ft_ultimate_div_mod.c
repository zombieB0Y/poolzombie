#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = swap / *b;
	*b = swap % *b;
}
/*int main()
{
	int a = 42;
	int b = 24;
	ft_ultimate_div_mod(&a,&b);
	printf("a = %d and b = %d", a, b);
	return 0;
}*/
