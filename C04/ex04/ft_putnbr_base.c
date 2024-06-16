/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:34:45 by zm                #+#    #+#             */
/*   Updated: 2024/06/16 04:35:37 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(long c)
{
	char	*base_hex;

	base_hex = "0123456789ABCDEF";
	if (c > 15)
	{
		print_hex(c / 16);
		c = c % 16;
	}
	if (c < 16)
		ft_putchar(base_hex[c]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (base == "0123456789ABCDEF")
		print_hex(nb);
}
int main()
{
	int i = 122;
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(i,base);
}
