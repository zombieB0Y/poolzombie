#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main()
{
	char *name = "zoubair";
	int leng;
	leng = ft_strlen(name);
	printf("count = %d", leng);
	return 0;
}*/
