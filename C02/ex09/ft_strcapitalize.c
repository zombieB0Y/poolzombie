/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:31:24 by zm                #+#    #+#             */
/*   Updated: 2024/05/20 06:55:02 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_check(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (ft_check(str[i]))
		{
			if (first && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			else if (!first && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}
/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}*/
