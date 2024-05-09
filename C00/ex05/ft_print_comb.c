#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 0;
	while (c1 <= 7)
	{
		c2 = c1 + 1;
		while (c2 <= 8)
		{
			c3 = c2 + 1;
			while (c3 <= 9)
			{
				ft_putchar(c1 + '0');
				ft_putchar(c2 + '0');
				ft_putchar(c3 + '0');
				if (c1 != 7 || c2 != 8 || c3 != 9)
					write (1, ", ", 2);
				c3++;
			}
			c2++;
		}
		c1++;
	}
	ft_putchar('\n');
}
/*int main()
{
	ft_print_comb();
	return 0;
}*/
