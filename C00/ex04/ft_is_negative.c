#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	po;
	char	ne;

	po = 'P';
	ne = 'N';
	if (n >= 0)
	{
		ft_putchar(po);
	}
	else
	{
		ft_putchar(ne);
	}
}
/*#include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		ft_is_negative(*av[1] - '0');
	}
	else
	{
		return 0;
	}
	return 0;
}*/
