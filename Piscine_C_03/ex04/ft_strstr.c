/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenorio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:54:53 by dtenorio          #+#    #+#             */
/*   Updated: 2023/09/07 06:26:56 by dtenorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	idx;

	idx = 0;
	while (str[idx])
	{
		count = 0;
		if (str[idx] == to_find[count])
		{
			while (to_find[count])
			{
				if (str[idx + count] == to_find[count])
					count++;
				else
					break ;
			}
			if (to_find[count] == '\0')
				return (str + idx);
		}
		idx++;
	}
	return (NULL);
}
