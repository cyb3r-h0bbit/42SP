#include <unistd.h>

void	ft_countdown(void)
{
	char	nbr;

	nbr = '9';
	while(nbr >= '0')
	{
		write(1, &nbr, 1);
		nbr--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	ft_countdown();
	return (0);
}
