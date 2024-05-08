#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c[];

	c[] = "abcdefghijklmnopqrstuvwxyz";
	write(1, &c, 26);
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
