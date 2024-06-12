/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:30:46 by zm                #+#    #+#             */
/*   Updated: 2024/06/12 01:32:33 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		i++;
		z++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char s1[30] = "zoubair ";
	char s2[] = "is up there!";
	printf("%s", ft_strcat(s1,s2));
	return 0;
}*/
