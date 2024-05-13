/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:26:27 by zm                #+#    #+#             */
/*   Updated: 2024/05/13 21:26:29 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;
	a = 42;
	b = 24;
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d and mod = %d", div, mod);
	return 0;
}*/
