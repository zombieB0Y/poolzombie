/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 03:01:31 by zm                #+#    #+#             */
/*   Updated: 2024/06/16 03:11:44 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_checkspe(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_checksign(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (1);
		return (0);
	}
}

int	ft_checknumbers(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_checkspe(*str))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (ft_checksign(*str))
		{
			sign = -sign;
			str++;
		}
		else
			str++;
	}
	while (ft_checknumbers(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*int main(int ac, char **av)
{
	printf("%d", ft_atoi(av[1]));
	return 0;
}*/
