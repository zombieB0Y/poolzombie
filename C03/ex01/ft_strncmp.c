/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:08:54 by zm                #+#    #+#             */
/*   Updated: 2024/06/12 01:43:49 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	z;
	unsigned int	i;

	i = 0;
	z = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
		{
			z = 0;
		}
		else if ((s1[i] - s2[i]) < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
		i++;
	}
	return (z);
}
/*int main ()
{
	char s1[] = "9123";
	char s2[] = "55555555555123";
	printf("  %d", ft_strncmp(s1,s2,7));
	return 0;
}*/
