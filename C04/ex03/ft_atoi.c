/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 03:06:22 by zm                #+#    #+#             */
/*   Updated: 2024/06/12 04:00:43 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_checkspe(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_checkalph(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (ft_checkspe(str[i]))
		{
			i++;
		}
		if (ft_checkalph(str[i]))
			return (result * sign);
		if (str[i] == '-')
			sign = -sign;
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*int main(int ac, char **av)
{
	printf("%d", ft_atoi(av[1]));
	return 0;
}*/
