/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:37:55 by zentifi           #+#    #+#             */
/*   Updated: 2024/05/13 21:16:37 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = swap;
		i++;
		size--;
	}
}
/*int main()
{
	int i = 0;
	int tab[] = {1,2,3,4,5,6,7,8,9};
	int si = 9;
	ft_rev_int_tab(tab,si);
	while(i < si)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}*/
