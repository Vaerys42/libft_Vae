/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:38:56 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/10 12:02:22 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[size] = '\0';
	return (j);
}
