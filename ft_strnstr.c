/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:13:16 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/13 16:31:19 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *find_in, char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	int				j;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0' || len == 0)
		return (find_in);
	if (find_in[0] == '\0')
		return (NULL);
	while (i < len && find_in[i] != '\0')
	{
		if (find_in[i] == to_find[j] && find_in[i] != '\0' && to_find[j] != '\0')
		{
			k = i;
			while (find_in[k] == to_find[j] && k < len)
			{
				k++;
				j++;
			}
			if (find_in[k] == to_find[j] && k < len)
				return (&find_in[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
