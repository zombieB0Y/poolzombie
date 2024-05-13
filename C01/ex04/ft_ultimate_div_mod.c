/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:26:36 by zm                #+#    #+#             */
/*   Updated: 2024/05/13 21:26:38 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = swap / *b;
	*b = swap % *b;
}
/*int main()
{
	int a = 42;
	int b = 24;
	ft_ultimate_div_mod(&a,&b);
	printf("a = %d and b = %d", a, b);
	return 0;
}*/
