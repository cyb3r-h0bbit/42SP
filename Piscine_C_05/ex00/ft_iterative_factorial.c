int	ft_itaretive_factorial(int nb)
{
	int	result;
	int	loop;
	int	temp;

	result = 1;
	loop = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (loop < nb)
	{
		temp = result * (loop + 1);
		result = temp;
		loop++;
	}
	return (result);
}
