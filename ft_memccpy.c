/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:47:18 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/10 10:46:24 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*new;
	unsigned char	*ori;

	new = dest;
	ori = src;
	i = 0;
	if (n == 0)
		return (NULL);
	while ((ori[i] != (unsigned char)c || i < n) && ori[i] != '\0')
	{
		new[i] = ori[i];
		i++;
	}
	if (ori[i] == '\0')
		return (NULL);
	return (&new[i + 1]);
}
