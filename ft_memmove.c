/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:06:35 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/09 15:00:44 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*new;
	unsigned char	*tmp;
	unsigned char	*start;

	i = 0;
	tmp = dest;
	start = src;
	while (i < n)
	{
		tmp[i] = start[i];
		i++;
	}
	new = tmp;
	return (new);
}
