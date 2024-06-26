/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:37:55 by zm                #+#    #+#             */
/*   Updated: 2024/05/19 18:01:05 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	numeric;

	i = 0;
	numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			numeric = 1;
		}
		else
		{
			numeric = 0;
			return (numeric);
		}
		i++;
	}
	return (numeric);
}
/*int main()
{
	char str[] = "";
	printf("%d\n", ft_str_is_numeric(str));
	return 0;
}*/
