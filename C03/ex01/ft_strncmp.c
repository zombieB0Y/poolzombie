/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:08:54 by zm                #+#    #+#             */
/*   Updated: 2024/06/06 17:33:29 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ret;
	unsigned int	i;

	i = 0;
	ret = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
/*int main ()
{
	char s1[] = "";
	char s2[] = "123456789";
	printf("  %d", ft_strncmp(s1,s2,7));
	return 0;
}*/
