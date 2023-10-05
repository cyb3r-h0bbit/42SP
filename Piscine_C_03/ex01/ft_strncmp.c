/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtenorio <dtenorio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:13:26 by dtenorio          #+#    #+#             */
/*   Updated: 2023/09/05 22:51:52 by dtenorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] == s2[idx] && idx < n)
	{
		if (s1[idx] == '\0')
			return (s1[idx] - s1[idx]);
		idx++;
	}
	return (0);
}
