/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:47:44 by zm                #+#    #+#             */
/*   Updated: 2024/06/19 11:44:38 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while(alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
#include<stdio.h>
int main()
{
	ft_print_alphabet();
	return 0;
}*/
