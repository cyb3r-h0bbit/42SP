#include <unistd.h>

char ft_star(void)
{
    int i;
    char    star;

    i = 0;
    star = 42;
    while (i < 7)
    {
        write(1, &star, 1);
        i++;
    }
    write(1, "\n", 1);
    return (star);
}

int main(void)
{
    ft_star();
    return (0);
}
