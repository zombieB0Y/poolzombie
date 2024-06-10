/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 02:11:55 by zm                #+#    #+#             */
/*   Updated: 2024/06/10 02:39:00 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (to_find[z] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] == to_find[z] && str[i + z] != '\0')
		{
			if (to_find[z + 1] == '\0')
			{
				return (str + i);
			}
			z++;
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char name[] = "zoubair is good!";
	char findd[] = "is";
	printf("%s\n", ft_strstr(name, findd));
	return 0;
}*/
