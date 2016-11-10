/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:13:16 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/09 16:06:53 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *find_in, char *to_find, size_t len)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0' || len == 0)
		return (find_in);
	while (i < len && find_in != '\0')
	{
		if (find_in[i] == to_find[j])
		{
			while (find_in[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (find_in[i] == to_find[j])
				return (&find_in[i - j]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
