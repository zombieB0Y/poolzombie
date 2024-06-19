/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:11:44 by zm                #+#    #+#             */
/*   Updated: 2024/06/19 11:14:41 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(long c, int count)
{
	char	*base;

	if (count == 16)
		base = "0123456789ABCDEF";
	else if (count == 2)
		base = "01";
	else if (count == 10)
		base = "0123456789";
	else if (count == 8)
		base = "01234567";
	else
		return ;
	if (c >= count)
	{
		print_base(c / count, count);
		c = c % count;
	}
	if (c < count)
		ft_putchar(base[c]);
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
	long	nb;
	long	i;

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
	ft_putnbr_base(122,"01");
	return 0;
}*/
