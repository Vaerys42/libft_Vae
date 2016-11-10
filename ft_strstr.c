/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:34:45 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/09 15:49:36 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *find_in, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (find_in);
	while (find_in[i] != '\0')
	{
		if (find_in[i] == to_find[j])
		{
			while (find_in[i] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				i++;
			}
			if (to_find[j] == '\0')
				return (&to_find[i - j]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
