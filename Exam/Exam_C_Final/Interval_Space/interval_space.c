#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    interval_space(const char *str)
{
    if (*str == '\0')
    {
        ft_putchar('\n');
        return ;
    }

    ft_putchar(*str);    
    ft_putchar(' ');      
    ft_putchar(' ');
    ft_putchar(' ');

    ft_putchar(str + 1);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return (0);
    }

    char *str = argv[1];
    interval_space(str);

    return (0);
}

