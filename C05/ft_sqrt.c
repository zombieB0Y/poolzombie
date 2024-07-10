int ft_power(int nb,int power)
{
	int result = 1;
	if(power > 0)
		result = nb * ft_power(nb,power - 1);
	return result;
}
int ft_sqrt(int nb)
{
	int count = 1;
	int i = 1;
	while(nb != ft_power(i,2))
	{
		i++;
		count++;
	}
	return count;
}
#include<math.h>
#include<stdio.h>
int main()
{
	double i = 16;
	printf("%f\n", sqrt(i));
	printf("%d\n", ft_sqrt(16));
	return 0;
}
