/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:19:57 by zm                #+#    #+#             */
/*   Updated: 2024/07/01 18:22:30 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	NO_MATCH = 0;
int	INVALID_BASE = 0;

int	ft_atoi_base(char *str, char *base);
int	twiceChar(char *symbols);
int	realValue(char *nbr, char *symbols, int baseValue, int positioni, int sign);
int	ft_pow(int, int);
int	ft_isspace(char *);
int	symbol_set(char, char *);

int	main(int argc, char **argv)
{
	char	*base;
	char	*nbr;
	int		result;

	nbr = argv[1];
	base = argv[2];
	result = ft_atoi_base(nbr, base);
	if (NO_MATCH)
		printf("The symbols in the base don't match the sample number\n");
	else if (INVALID_BASE)
		printf("Invalid base\n");
	else
		printf("The real value of \"%s\" in base \"%s\" is -> %d\n", nbr, base,
				result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baseValue;
	int	position;
	int	final;
	int	sign;

	sign = +1;
	baseValue = 0;
	position = 0;
	while (base[baseValue])
	{
		if (base[baseValue] == '+' || base[baseValue] == '-'
			|| base[baseValue] == ' ')
		{
			INVALID_BASE = 1;
			return (0);
		}
		++baseValue;
	}
	if (baseValue < 2)
	{
		INVALID_BASE = 1;
		return (0);
	}
	if (twiceChar(base))
	{
		INVALID_BASE = 1;
		return (0);
	}
	while (*(str + position))
	{
		while (*str == '+' || *str == '-' || ft_isspace(str)) //Ok
		{
			if (*str == '-')
				sign *= -1;
			++str;
		}
		if (!symbol_set(*(str + position), base)) //Ok
		{
			NO_MATCH = 1;
			return (0);
		}
		++position;
	}
	return (realValue(str, base, baseValue, position - 1, sign));
}

int	realValue(char *nbr, char *symbols, int baseValue, int position, int sign)
{
	int	i;

	i = 0;
	if (!position)
	{
		while (*nbr != *(symbols + i))
			++i;
		return (i * sign);
	}
	else
	{
		while (*nbr != *(symbols + i))
			++i;
		return (realValue(nbr + 1, symbols, baseValue, position - 1, sign) + (i
				* ft_pow(baseValue, position) * sign));
	}
}

int	symbol_set(char c, char *symbols)
{
	while ((c != *symbols) && *symbols)
		symbols++;
	if (!*symbols)
		return (0);
	return (1);
}

int	ft_pow(int base, int pow)
{
	if (0 == pow)
		return (1);
	else
		return (ft_pow(base, pow - 1) * base);
}

int	twiceChar(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	ft_isspace(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == 32)
		return (1);
	else
		return (0);
}
