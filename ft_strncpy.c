/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:04:56 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/09 15:40:19 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t i;
	size_t ldest;
	size_t lsrc;

	i = 0;
	ldest = 0;
	lsrc = 0;
	while (src[lsrc] != '\0')
		lsrc++;
	while (dest[ldest] != '\0')
		ldest++;
	while (i <= n || src[i] != '\0' || dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n || n > lsrc)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
