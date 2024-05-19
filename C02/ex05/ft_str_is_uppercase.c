/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:14:35 by zm                #+#    #+#             */
/*   Updated: 2024/05/19 18:28:37 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper = 1;
		else
		{
			upper = 0;
			return (upper);
		}
		i++;
	}
	return (upper);
}
/*int main()
{
	char str[] = "";
	printf("%d\n", ft_str_is_uppercase(str));
	return 0;
}*/
