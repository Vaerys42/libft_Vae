/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:22:54 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/19 13:42:23 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	unsigned int		i;

	i = 0;
	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	while (n != 0)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
		n--;
	}
	return (0);
}
