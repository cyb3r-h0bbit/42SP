#include <unistd.h>

void	maff_revalpha(void)
{	
	char	odd;
	char	even;

	odd = 'Y';
	even = 'z';
	while(even >= 'a' && odd >= 'A')
	{
		write(1, &even, 1);
		write(1, &odd, 1);
		even -= 2;
		odd -= 2;
	}
	write(1, "\n", 1);
}

int main(void)
{
	maff_revalpha();
	return (0);
}
