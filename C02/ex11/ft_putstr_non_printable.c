/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 00:24:34 by zm                #+#    #+#             */
/*   Updated: 2024/05/22 00:31:57 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_hex(char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_digits[c / 16]);
	ft_putchar(hex_digits[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			print_hex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/*int main()
{
    char test_str[] = "Coucou\nFtu vas bien ?";
    ft_putstr_non_printable(test_str);
    return 0;
}*/
