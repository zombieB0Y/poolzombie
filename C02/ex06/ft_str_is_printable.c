/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:33:13 by zm                #+#    #+#             */
/*   Updated: 2024/05/19 18:51:30 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	pri;

	i = 0;
	pri = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			pri = 1;
		else
		{
			pri = 0;
			return (pri);
		}
		i++;
	}
	return (pri);
}
/*int main()
{
	char pri[] = "v|{}  ";
	printf("%d\n", ft_str_is_printable(pri));
	return 0;
}*/
