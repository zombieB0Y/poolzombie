/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 00:35:09 by zm                #+#    #+#             */
/*   Updated: 2024/06/19 00:46:26 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(long c, int count)
{
	char	*base_hex;
	char	*base_bin;
	char	*base_dec;
	char	*base_oct;

	base_hex = "0123456789ABCDEF";
	base_bin = "01";
	base_dec = "0123456789";
	base_oct = "01234567";
	if (count == 16)
	{
		if (c > 15)
		{
			print_base(c / 16, count);
			c = c % 16;
		}
		if (c < 16)
			ft_putchar(base_hex[c]);
	}
	if (count == 2)
	{
		if (c > 1)
		{
			print_base(c / 2, count);
			c = c % 2;
		}
		if (c < 2)
			ft_putchar(base_bin[c]);
	}
	if (count == 10)
	{
		if (c > 9)
		{
			print_base(c / 10, count);
			c = c % 10;
		}
		if (c < 10)
			ft_putchar(base_dec[c]);
	}
	if (count == 8)
	{
		if (c > 7)
		{
			print_base(c / 8, count);
			c = c % 8;
		}
		if (c < 8)
			ft_putchar(base_oct[c]);
	}
}

int	check_cond(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (base[0] == '\0' && base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
		long nb;
		long i;

	if (check_cond(base))
	{
		nb = nbr;
		i = 0;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		while (base[i] != '\0')
		{
			i++;
		}
		if (i == 16)
			print_base(nb, i);
		if (i == 2)
			print_base(nb, i);
		if (i == 10)
			print_base(nb, i);
		if (i == 8)
			print_base(nb, i);
	}
}
/*int main()
{
	int i = 122;
	char base[] = " 0";
	ft_putnbr_base(i,base);
}*/
