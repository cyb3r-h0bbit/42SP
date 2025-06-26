void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i == x - 1)
			ft_putchar(right);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (y <= 0 || x <= 0)
		return ;
	while (j < y)
	{
		if (j == 0)
			print_line(x, 'o', '-', 'o');
		else if (j == y - 1)
			print_line(x, 'o', '-', 'o');
		else
			print_line(x, '|', ' ', '|');
		j++;
	}
}
