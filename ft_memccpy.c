/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:47:18 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/19 13:29:11 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*new;
	const unsigned char	*ori;
	unsigned char		x;

	new = (unsigned char *)dest;
	ori = (const unsigned char *)src;
	i = 0;
	x = (unsigned char)c;
	while (i < n)
	{
		new[i] = ori[i];
		if (ori[i] == x)
			return (dest);
		i++;
	}
	return (NULL);
}
