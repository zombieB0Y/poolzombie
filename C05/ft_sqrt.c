int	ft_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 0)
		result = nb * ft_power(nb, power - 1);
	return (result);
}
int	ft_sqrt(int nb)
{
	int	count;
	int	i;

	count = 1;
	i = 1;
	while (nb != ft_power(i, 2))
	{
		i++;
		count++;
	}
	return (count);
}
