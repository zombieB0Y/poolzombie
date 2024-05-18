/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:59:22 by zm                #+#    #+#             */
/*   Updated: 2024/05/18 17:34:28 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			alpha = 1;
		}
		else
		{
			alpha = 0;
			return (alpha);
		}
		i++;
	}
	return (alpha);
}
/*int main()
{
	char str[] = "";
	printf("%d\n", ft_str_is_alpha(str));
	return 0;
}*/
