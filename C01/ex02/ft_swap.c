#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*int main()
{
	int a = 42;
	int b = 24;
	ft_swap(&a,&b);
	printf("a = %d and b = %d", a, b);
	return 0;
}*/