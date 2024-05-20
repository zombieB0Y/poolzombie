/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:48:42 by zm                #+#    #+#             */
/*   Updated: 2024/05/19 22:48:44 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
