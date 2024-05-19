/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:01:58 by zm                #+#    #+#             */
/*   Updated: 2024/05/19 18:13:02 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	cas;

	i = 0;
	cas = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			cas = 1;
		else
		{
			cas = 0;
			return (cas);
		}
		i++;
	}
	return (cas);
}
/*int main()
{
	char	str[] = "";
	printf("%d\n", ft_str_is_lowercase(str));
	return 0;
}*/
