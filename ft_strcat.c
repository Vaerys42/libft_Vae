/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:11:16 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/04 17:35:03 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		len_dest;
	int		src_dest;
	int		i;

	i = 0;
	len_dest = ft_strlen(dest) + 1;
	src_dest = ft_strlen(src) + 1;
	if (len_dest < len_dest + src_dest)
	{
		return (dest);
	}
	while (len_dest < len_dest + src_dest)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	return (dest);
}
