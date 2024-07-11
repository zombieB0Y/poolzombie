int	ft_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	int	prime;
	int	check;

	if (nb == 0 || nb == 1)
		return (2);
	prime = nb;
	check = 0;
	while (!check)
	{
		prime++;
		if (ft_prime(prime))
			check = 1;
	}
	return (prime);
}
