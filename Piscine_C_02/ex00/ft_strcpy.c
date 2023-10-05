/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenorio <dtenorio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:09:50 by dtenorio          #+#    #+#             */
/*   Updated: 2023/08/27 18:57:56 by dtenorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cpy;

	cpy = 0;
	while (src[cpy])
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	dest[cpy] = '\0';
	return (dest);
}
