/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:33:43 by zm                #+#    #+#             */
/*   Updated: 2024/05/23 21:52:35 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			ret = 0;
		}
		else
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
		i++;
	}
	return (ret);
}
/*int main()
{
	char s1[] = "ffd";
	char s2[] = "ffd";
	printf("%d", ft_strcmp(s1,s2));
	return 0;
}*/
