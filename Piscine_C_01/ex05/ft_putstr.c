/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenorio <dtenorio@student.42.sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:59:27 by dtenorio          #+#    #+#             */
/*   Updated: 2023/08/27 18:31:38 by dtenorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	e;

	e = 0;
	while (str[e])
	{
		write(1, &str[e], 1);
		e++;
	}
}

int	main()
{
	ft_putstr("hello");
	return 0;
}
